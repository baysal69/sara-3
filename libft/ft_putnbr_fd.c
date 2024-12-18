/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:36:26 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/01 11:40:54 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
/*#include <limits.h>
int main()
{
	int fd = 1;

	ft_putnbr_fd(INT_MIN, fd);
	return (0);
}*/
/*#include <fcntl.h>
#include <stdio.h>
int main()
{
	int c = 12345;
	int fd = open ("test.txt", O_RDWR, O_CREAT);
	//printf ("%d", fd);
	ft_putnbr_fd(c, fd);
	close (fd);
}*/