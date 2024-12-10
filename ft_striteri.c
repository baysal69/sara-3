/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:27:44 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/01 15:51:08 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void to_lower(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
} */
/*int main()
{
	char str[] = "wassim";
	char str1[] = "WASSIM";

	ft_striteri(str, to_lower);
	ft_striteri(str1, to_lower);
	printf("%s\n", str);
	printf("%s\n",str1);
	return 0;
}*/