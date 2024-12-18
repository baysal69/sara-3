/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:53:52 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/12 23:35:51 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}
/* int main()
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
	printf("hey there\n");
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