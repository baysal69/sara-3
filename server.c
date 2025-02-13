/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:09:05 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/12 21:53:48 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

void	signal_handler(int signum);

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_printf("PID: %d\n", pid);
	while (1)
	{
		signal(SIGUSR1, signal_handler);
		signal(SIGUSR2, signal_handler);
		pause();
	}
	return (0);
}

void	signal_handler(int signum)
{
	static unsigned char	bits;
	static int				len;

	if (signum == SIGUSR1)
		bits = (bits << 1) | 0;
	if (signum == SIGUSR2)
		bits = (bits << 1) | 1;
	len++;
	if (len == 8)
	{
		write(1, &bits, 1);
		bits = 0;
		len = 0;
	}
}
