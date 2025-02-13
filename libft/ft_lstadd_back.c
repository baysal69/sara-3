/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:53:52 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/14 17:47:50 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;//x attraversare la lista
	if (new == NULL)//node is null, nothing to add
		return ;
	if (*lst == NULL)//list is empty, so head is null
	{
		*lst = new;//head must point to new node
		return ;
	}
	ptr = ft_lstlast(*lst);//if list nt empty, find the last: next == null
	ptr->next = new;//then add it last
}
/* int main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("sara");
	t_list *node2 = ft_lstnew("wassim");
	head = node1;
	t_list *tmp = node2;
	while(tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("new node :\n");
	ft_lstadd_back(&head, node2);
	t_list *tmpp = head;
	while (tmpp)
	{
		printf("%s\n", (char *)tmpp->content);
		tmpp = tmpp->next;
	}
	free(node1);
	free(node2);
} */