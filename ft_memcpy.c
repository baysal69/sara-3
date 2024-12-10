/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:25:35 by sel-khao          #+#    #+#             */
/*   Updated: 2024/11/28 17:35:28 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destt;
	unsigned char	*srcc;
	size_t			i;

	i = 0;
	srcc = (unsigned char *)src;
	destt = (unsigned char *)dest;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}
/*int main()
{
	char dest[] = "ily";
	char src[] = "wassim";

	ft_memcpy(dest, src, 6);
	printf("%s\n", dest);
	return (0);
}*/