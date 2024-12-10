/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:13:32 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/01 19:42:15 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		substr_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr_len = ft_strlen(s) - start;
	if (substr_len > len)
		substr_len = len;
	str = (char *)malloc((substr_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*This function extract a substring from s
starting at the index start, has a maximum length of len*/
/*int main()
{
    char *s = "wassimy";
    unsigned int start = 5;
    size_t len = 2;

    char *substr = ft_substr(s, start, len);
    if (substr != NULL)
    {
        printf("substr: %s\n", substr);
        free(substr);
    }
    else
        printf("NULL\n");
    return 0;
} */
