/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:30:46 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/13 20:19:38 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!lst)
		return (NULL);
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}
/* int main(void)
{
	t_list *node1 = ft_lstnew("sara");
	t_list *node2 = ft_lst_new("wassim");

	ft_lstadd_back(&node1, node2);
	t_list *temp = node1;
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	free(node1);
	free(node2);
	return 0;
} */