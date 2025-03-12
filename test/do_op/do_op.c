/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 07:16:32 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/12 07:43:43 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int one;
	int two;
	int res;
	int i = 0;

	if (argc == 4)
	{
		one = atoi(argv[1]);
		two = atoi(argv[3]);
		if (argv[2][i] == '+')
			res = one + two;
		else if (argv[2][i] == '-')
			res = one - two;
		else if (argv[2][i] == '*')
			res = one * two;
		else if (argv[2][i] == '/')
			res = one / two;
		else if(argv[2][i] == '%')
			res = one % two;
		printf("%i", res);
	}
	printf("\n");
}