/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:46:07 by sel-khao          #+#    #+#             */
/*   Updated: 2024/11/28 16:05:42 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	while (n--)
	{
		*str = a;
		str++;
	}
	return (s);
}
/*int main()
{
	int i;

	i = 0;
    char str[10];
    ft_memset(str, 'w', 10);
    while (i < 10)
	{
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");
	return 0;
}*/