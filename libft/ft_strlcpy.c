/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:50:56 by sel-khao          #+#    #+#             */
/*   Updated: 2024/11/28 12:11:44 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src == NULL)
	{
		if (size > 0)
			dst[0] = '\0';
		return (0);
	}
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = ft_strlen(src);
	return (i);
}
/*int main(void)
{
    char src[] = "heyo, wassim";
    char dst[20];
    size_t size = 10;
    size_t result = ft_strlcpy(dst, src, size);

    printf("src: %s\n", src);
    printf("dest: %s\n", dst);
    printf("len: %ld\n", result);
    return 0;
}*/