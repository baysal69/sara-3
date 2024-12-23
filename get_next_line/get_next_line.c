/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:51:24 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/23 22:43:33 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static freein(char *str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

static char	*last_line(char **line)
{
	char	*tmp;

	if (!line || !*line)
		return (NULL);
	tmp = ft_strdup(*line);
	free(*line);
	*line = NULL;
	return (tmp);
}

static char	*trunc_line(char **line, int trunc)
{
	char	*next_line;
	char	*temp;
	
	next_line = malloc(trunc + 2);
	if (!next_line)
		return (NULL);
	ft_strlcpy(next_line, *line, trunc);
	temp = *line;
	*line = ft_strdup((*line) + trunc + 1);//creatin new str starts after the \n
	freein(&temp);
	return (next_line);
}

static void	initial(t_utils *utils)
{//modify the struct via the pointer
	utils->next_line = NULL;
	utils->buffer = NULL;
	utils->left_over = NULL;
	utils->readed = 0;
	utils->trunc = - 1;
}

char	*get_next_line(int fd)
{
	static char	*line;
	t_utils		utils;

	initial(&utils);
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	utils.buffer = malloc(BUFFER_SIZE + 1);
	if (!utils.buffer)
		return (NULL);
	while (utils.readed == BUFFER_SIZE && utils.trunc == - 1)//first aint \n
	{
		utils.readed = read(fd, utils.buffer, BUFFER_SIZE);
		utils.buffer[utils.readed] = '\0';
		utils.left_over = line;
		line = ft_strjoin(line, utils.buffer);
		freein(&utils.left_over);
		utils.trunc = ft_trunc(line);
	}
	freein(&utils.buffer);
	if (utils.trunc == -1)//if no '\n' found, so its last line
		return (utils.left_over = last_line(&line));//put whats int l_o to line
	else
		utils.next_line = trunc_line(&line, utils.trunc);
	return (utils.next_line);
}
#include <fcntl.h>
int main (void)
{
	int	fd;
	char *line;

	fd = open("hope.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("%s", "got unlucky :c");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
