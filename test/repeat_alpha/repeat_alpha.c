/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:32:07 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/12 15:50:53 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	char c;
	int rep;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep = c - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep = c - 'A' + 1;
			else
				rep = 1;	
			while (rep > 0)
			{
				write (1, &c, 1);
				rep --;
			}
			i++;
		}
	}
	write (1, "\n", 1);
}