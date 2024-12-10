/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:16:52 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/04 17:56:51 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;	
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	while (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* char to_lower(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		return(c + 32);
	return (c);
}
int main()
{
	const char *str = "WASSIM";
	char	*result;

	result = ft_strmapi(str, to_lower);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("NULL\n");
	return (0);
} */