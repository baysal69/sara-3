/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:52:27 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/23 15:31:09 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <sys/types.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	ft_strjoin(char *s1, char *s2);
char	ft_strlcpy(char *dst, char *src, size_t size);
int		ft_strlen(char *str);
char	ft_strdup(char *s);
int		ft_trunc(char *str);

//UTILITY STRUCTUR
typedef struct s_utils 
{
	ssize_t	readed;//how much i've processed so far
	char	*next_line;
	char	*buffer;
	char	*left_over;
	int		trunc;
	//Example: After calling read(fd, buffer, BUFFER_SIZE), this stores data read.
}					t_utils;//all variables of type t_utils are istances(ISTANZA)

#endif
/*
read() = it doesn’t care if that data contains a full line or part of a line.
			it simply reads the data in chunks up to the size of BUFFER_SIZE
buffer = temporarily stores raw data read from the file, when i call
			read() in gnl, the raw data is placed into buffer.
			could be like "Hello, how are you?\nI am fine"
			or "Hello, how"(in case bsize is 10). buffer can only contain
			the buffer_size for each call of read, thats why we need to store 
			somewhere else c:

After reading data into buffer, i check for presence of \n in buffer
if it contains it, i've got a line and gotta separate it c:
so i move "Hello, how are you?\n" into next_line, if buffer contains
"Hello, how", i dont have a full line so i keep reading until i find \n

next_line = i store in it the completed line  i found and wanna return.
After i gotta check in buffer for \n and if found, i copy everything before it to next_line
if not found i keep reading more data into buffer.
next_line is the complete, finalized line you want to return.

left_over = i read, no \n? then it goes to left_over
			(Use dynamic memory allocation to expand left_over as needed)
			i read again, yes \n? 
			in case the \n isnt found, all the data
left_over holds the "extra" that wasn't processed yet, so it can be used in the next call.

static allocation: memor alloc at compile time and has fixed size.
					allocates in STACK(local variab) or in GLOBAL
					or STATIC(for global and static variab).
dynamic allocation: memor alloc at runtime usin' function as malloc,
					calloc and realloc. memo alloc in HEAP.

buffer: block of memory(usually pointer or array) used to temp
		store data that is being read or written.
		is the actual memory space where the data is stored
		after reading
		
BUFFER_SIZE: constant value(macro) defines the size of the buffer
			"i wanna read up to ... bytes from this file".
			its just a number.
			
how does it work?      read(fd, buffer, BUFFER_SIZE);
				when i call read(), i pass BUFFER_SIZE as the 
				maximum number of bytes to read from fd.
buffer is created with a size that corresponds to BUFFER_SIZE

*/