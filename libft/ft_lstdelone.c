/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:25:55 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/13 20:29:56 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/* void	 del(void *content)
{
	free(content);
}
int main(void) FUNZIONA
{
	t_list *node1 = ft_lstnew(ft_strdup("sara"));
	t_list *node2 = ft_lstnew(ft_strdup("wassimo"));
	node1->next = node2;
	
	printf("before deleting:\n");
	t_list *temp = node1;
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstdelone(node1, del);
	node1 = node2;
	printf("after deleting:\n");
	t_list *tempp = node1;
	while(tempp)
	{
		printf("%s\n", (char *)tempp->content);
		tempp = tempp->next;
	}
	ft_lstdelone(node1, del);
	return 0;
} */