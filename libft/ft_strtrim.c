/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:28:54 by sel-khao          #+#    #+#             */
/*   Updated: 2024/11/29 22:12:08 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end - 1]))
		end--;
	len = end;
	trim = malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1, len + 1);
	return (trim);
}
/*int main()
{
    const char *s1 = "ssxxrx";
    const char *set = "x";
    char *res = ft_strtrim(s1, set);
    if (res)
    {
        printf("%s\n", res);
        free(res);
    }
    else
        printf("NULL\n");
    return 0;
}*/