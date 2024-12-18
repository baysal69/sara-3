/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:23:14 by sel-khao          #+#    #+#             */
/*   Updated: 2024/11/30 17:46:01 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/* allocates memory for an array of n elements,
each of size size, and initializes it to zero
int main()
{
	int	*arr;
	int	i;
//allocate memory for an array of 5 integer(20 bytes)
	arr = (int *)ft_calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	{
		printf("%d\n", i, arr[i]);
		i++;
	}
	if (arr == NULL)
    {
        printf("NULL\n");
        return 0,;
    }
	free(arr);
	return (0);
}*/