/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:15:34 by sel-khao          #+#    #+#             */
/*   Updated: 2024/11/30 18:03:39 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str = 0;
		str++;
	}
}
/*int main()
{
    char str[] = "i'm sleepy";
    printf("before bzero: %s\n", str);
    ft_bzero(str, 5);
    printf("after call: %s\n", str);

    char str2[] = "chocolate";
    ft_bzero(str2, 0);
    printf("n is zero: %s\n", str2);

    char *str3 = NULL;
    ft_bzero(str3, 3);
    if (str3 != NULL)
        printf("%s\n", str3);
    else
        printf("NULL\n");
    return 0;
}*/