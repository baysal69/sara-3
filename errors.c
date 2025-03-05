/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:33:07 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/05 11:18:19 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

long	dupli(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc > i)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				{
					write(2, "error\n", 6);
					return (0);
				}
				j++;
			}
			i++;
		}
	}
	return (1);
}

int	vali_num(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') ||
				(argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
			{
				write (2, "error\n", 6);
				return (1);
			}
			else
				j++;
			j++;
		}
		i++;
	}
	return (0);
}

/*long	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	if (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
int	vali_num(int argc, char *argv[]) 
{
	int	i;
	int j;

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
} */
