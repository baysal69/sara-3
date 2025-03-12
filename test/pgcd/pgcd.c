/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:05:34 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/27 11:39:55 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c = 1;
	int cd;
	
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		while (c <= a)
		{
			if (a % c == 0 && b % c == 0)
				cd = c;
			c++;
		}
		printf("%i", cd);
	}
	printf("\n");
	return (0);
}