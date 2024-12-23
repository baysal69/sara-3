/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:51:24 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/22 21:49:10 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	initial(t_utils *utils)
{//modify the struct via the pointer
	utils->next_line = NULL;
	utils->buffer = NULL;
	utils->left_over = NULL;
	utils->readed = 0;
	utils->trunc = -1;
}

char	*get_next_line(int fd)
{
	static char	*line;
	t_utils		utils;

	initial(&utils);
	if (BUFFER_SIZE <= 0 || (read(fd, utils.buffer, 0)) < 0)
		return (NULL);
	utils.buffer = malloc(BUFFER_SIZE + 1);
	if (!utils.buffer)
		return (NULL);
	while (BUFFER_SIZE > 0 )
	{
		utils.readed = read(fd, utils.buffer, BUFFER_SIZE);
		
	}
	//if (utils.trunc == -1)
	//	return (utils.left_over);
}
