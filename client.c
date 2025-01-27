/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:08:52 by sel-khao          #+#    #+#             */
/*   Updated: 2025/01/27 10:09:11 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

void convert_signs(char c, pid_t server_pid)
{
	
}
int main(int argc, char *argv[])
{
	int i;
	pid_t server_pid;
	
	i = 0;
	if (argc == 3)
	{
		server_pid = ft_atoi(argv[1]);
		while (argv[2][i])
		{
			convert_signs(server_pid, argv[2][i]);			
			i++;
		}
	}
	else
	{
		printf("not the right number of arguments");
		exit(1);
	}
	return 0;
}

/*

client (pid, str)

she uses PID to send signals(messages)

client must send str passed to the server

*/