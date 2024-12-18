/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:19:40 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/12 12:17:11 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
/* int main()
{
	t_list	*node1 = ft_lstnew("sara");
	t_list	*node2 = ft_lstnew("wassimo");

	node1->next = node2;
	printf("%d\n", ft_lstsize(node1));
	free(node1);
	free(node2);
} */