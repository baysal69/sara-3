/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:25:10 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/05 20:49:37 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main()
{
	int fd = 1; //1 is for terminal

	ft_putchar_fd('w', fd);
	return 0;
} */
/* #include <fcntl.h>
#include <stdio.h>
int main()
{
	char c = 'G';
	int fd = open ("test.txt", O_RDWR | O_CREAT);
	//printf ("%d", fd);
	ft_putchar_fd(c, fd);
	close(fd);
} */