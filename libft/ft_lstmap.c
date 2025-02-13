/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:09:45 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/15 19:39:01 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_lst;

	new_lst = NULL;
	while (lst)
	{
		node = ft_lstnew((*f)(lst->content));
		if (node->content == NULL)
		{
			(*del)(node->content);
			free(node);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
/* void	del(void *content)
{
	free(content);
}
void *ttoupper(void *content)
{
	char *str = (char *)content;

	while(*str)
	{
		*str = ft_toupper((unsigned char)*str);
		str++;
	}
	return (content);
}
int main()
{
	t_list *node1 = ft_lstnew(ft_strdup("sara"));
	t_list *node2 = ft_lstnew(ft_strdup("wassim"));
	t_list *head = node1;

	node1->next = node2;

	t_list *temp = head;
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	t_list	*new_list = ft_lstmap(head, ttoupper, del);
	printf("new list:\n");
	temp = new_list;
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&head, del);
    //ft_lstclear(&new_list, del);
	free(new_list->next);
	free(new_list);
	return 0;
} */