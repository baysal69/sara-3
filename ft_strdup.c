/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:47:06 by sel-khao          #+#    #+#             */
/*   Updated: 2024/11/28 11:51:24 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	return (str);
}
/*int main(void)
{
    const char *original = "heyy";
    char *dup = ft_strdup(original);

    if (dup != NULL)
    {
        printf("original: %s\n", original);
        printf("dup: %s\n", dup);
        free(dup);
    }
    else
    {
        printf("NULL\n");
    }
    return 0;
}*/