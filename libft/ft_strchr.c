/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:48:01 by sel-khao          #+#    #+#             */
/*   Updated: 2024/11/29 22:06:19 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*applies a function f to each character in the string s,
passing the index of the character and a pointer to
the character itself to f

int	main()
{
	char *result = ft_strchr("wassim", 'a'); s 
	if (result != NULL)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("NULL\n");
	}
	return (0);
}*/