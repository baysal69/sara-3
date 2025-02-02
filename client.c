/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:08:52 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/02 16:17:38 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>

void	convert_signs(char c, pid_t server_pid)
{
	int	b;

	b = 7;
	while (b >= 0)
	{
		if ((c >> b) & 1)
			kill(server_pid, SIGUSR2);
		else
			kill(server_pid, SIGUSR1);
		usleep(30);
		b--;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	pid_t	server_pid;

	i = 0;
	if (argc == 3)
	{
		server_pid = ft_atoi(argv[1]);
		while (argv[2][i])
			convert_signs(argv[2][i++], server_pid);
	}
	else
	{
		ft_printf("not the right number of arguments\n");
		exit(1);
	}
	return (0);
}
