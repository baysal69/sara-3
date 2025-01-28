/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:09:05 by sel-khao          #+#    #+#             */
/*   Updated: 2025/01/27 10:09:06 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

void signal_handler(int signum);
//function declaration
//"Hey, there is a function called
//signal_handler that takes an int as an argument and returns void"
int main(void)
{
	pid_t PID;

	PID = getpid();
	printf("PID: %d\n", PID);
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while(1)
		pause();
	return (0);
}

void signal_handler(int signum)
{
	static unsigned char bits;
	static int len;

	if (signum == SIGUSR1)
	{
		bits = (bits << 1) | 0;
		len++;
	}
	if (signum == SIGUSR2)
	{
		bits = (bits << 1) | 1;
		len++;
	}
	if (len == 8)
	{
		write(1, &bits, 1);
		bits = 0;
		len = 0;
	}
}

/*
starts first and has to print PID, he provides PID.

he listens and respond to message

recives str from client and prints it quickly
(less than 1 sec for 100 chars)

has to be able to recive the str from more than one client in a row
without needing to restart

only SIGUSR1 SIGUSR2
*/