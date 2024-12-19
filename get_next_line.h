/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:52:27 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/19 15:25:47 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
//default size that applies to entire project
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
//im creating a data type
typedef struct s_utils //define a structure named s_utils 
{
	int				file_d;
	char			*next_line;
	char			*left_over;
	char			*buffer;
	struct s_utils	*next;
}					t_utils;//creates alias for "struct s_utils"
//its like typing: typedef struct s_utils t_utils
//im creating a new data(t_utils) type with the elements
char	*get_next_line(int fd);
#endif