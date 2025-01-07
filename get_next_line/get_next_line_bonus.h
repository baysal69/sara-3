/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:49:42 by sel-khao          #+#    #+#             */
/*   Updated: 2025/01/06 12:13:46 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 4096
# endif

typedef struct s_utils
{
	ssize_t	readed;
	char	*next_line;
	char	*buffer;
	char	*left_over;
	int		trunc;
}					t_utils;

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
void	ft_strlcpy(char *dst, char *src, int size);
int		ft_strlen(char *str);
char	*ft_strdup(char *s);
int		ft_trunc(char *str);

#endif
