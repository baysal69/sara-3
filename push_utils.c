/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:48:01 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/14 21:55:51 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

//checks input errors
int main(int argc, char *argv[])
{
	int	i;
	int j;

	j = 0;
	i = 1;
	while (i < argc)
	{
		while (argv[i][j] == ' ' || argv[i][j] >= 9 && argv[i][j] <= 13)
			j++;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;	
		if (argv[i][j] =='\0')//ensure theres a num after -/+ if exists
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		while (argv[i][j])
		{
			if (atoi(argv[i][j]) <= INT_MIN)
			{
				write(2, "error\n", 6);
				exit (1);
			}
			if ((!(argv[i][j] >= '0' && argv[i][j] <= '9')))
			{
				write(2, "Error\n", 6);
				exit (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}


