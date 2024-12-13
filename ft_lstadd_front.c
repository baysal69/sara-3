/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:06:34 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/12 15:02:31 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/* int main()
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("sara");
	t_list *node2 = ft_lstnew("wassim");
	head = node1;
	t_list *tmp = head;
	while(tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("hey there\n");
	ft_lstadd_front(&head, node2);
	t_list *tmpp = head;
	while (tmpp)
	{
		printf("%s\n", (char *)tmpp->content);
		tmpp = tmpp->next;
	}
	free(node1);
	free(node2);
} */