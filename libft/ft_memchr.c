/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 22:48:10 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/01 18:13:43 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
/*function is designed to search first occurrence of a char
within a block of memory (s), returns c pos.*/
/* int main()
{
	const char *str = "wassim";

	char *result = ft_memchr(str, 'i', 5);  
	if (result)
	{
		printf("pos: %ld\n", result - str);
	}
	else
	{
		printf("NULL\n");
	}
	return (0);
} */