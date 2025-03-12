/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:00:21 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/27 16:50:24 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int	a1 = a;
	int b1 = b;
	int max;
	int index;
	int lcm = 0;

	if (a1 <= 0 || b1 <= 0)
		return 0;
	if (a1 > b1)
	{
		index = a1;
		max = a1;
	}
	else
	{
		index = b1;
		max = b1;
	}
	while (1)
	{
		if (max % a1 == 0 && max % b1 == 0)
		{
			lcm = max;
			break ;
		}
		max += index;
	}
	return ((unsigned int)lcm);
}
