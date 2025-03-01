/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:33:07 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/01 19:36:23 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

long	ft_atoi(const char *nptr)
{
	int i;
	int sign;
	long res;

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

long dupli(int argc, char **argv)
{
	int i = 1;
	int j ;
	// int n1;
	// int n2;

	while (argc > i)
	{
		while (i < argc)
		{
			//n1 = ft_atoi (argv[i]);
			j = i + 1;
			printf("j = %d \n", j);
			while(j < argc)
			{
				printf("n1 %ld ", ft_atoi(argv[i]));
				// n2 = ft_atoi(argv[j]);
				printf("N2 %ld\n", ft_atoi(argv[j]));
				if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
					return 0;
				j++;
			}
			i++;
		}
	}
	return 1;
}

int main(int argc, char *argv[])
{
    if (dupli(argc, argv) == 0)
        printf("Duplicate found!\n");
    else
        printf("No duplicates found.\n");

    return 0;
}

/* int	valid_num(int argc, char *argv[])
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
