/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:55:35 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/10 19:20:40 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numb_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*res;
	const char	*digits;
	int			len;
	long		num;

	num = n;
	digits = "0123456789";
	len = numb_len(num);
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
/* int	main()
{
	printf("%s\n", ft_itoa(1337));
}*/