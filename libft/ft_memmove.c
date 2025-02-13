/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:00:18 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/15 18:55:01 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destt;
	unsigned char	*srcc;
	size_t			i;

	i = 0;
	srcc = (unsigned char *)src;
	destt = (unsigned char *)dest;
	if (!src && !dest)
		return (NULL);
	if (dest > src)
	{
		while (n--)
		{
			destt[n] = srcc[n];
		}
	}
	else
	{
		while (i < n)
		{
			destt[i] = srcc[i];
			i++;
		}
	}
	return (dest);
}
/*int main()
{
	char dest[20] = "wassim";
	char src[] = "sara";
	ft_memmove(dest, src, 1);
	printf("%s\n", dest);
	return (0);
}*/