/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:41:38 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/27 12:16:59 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	num_len(long n)
{
	int len = 0;

	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
char	*ft_itoa(int nbr)
{
	char	*res;
	const	char	*digits = "0123456789";
	int len = num_len(nbr);
	long num = nbr;

	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	else if (num == 0)
		res[0] = '0';
	while (num > 0)
	{
		res[--len] = digits[num % 10];
		num /= 10;
	}
	return (res);
}
