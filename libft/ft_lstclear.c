/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:08:00 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/13 20:12:56 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
/* void	 del(void *content)
{
	if (content)
		free(content);
}
int main()
{
	t_list	*head = ft_lstnew(ft_strdup("sara"));
	t_list	*node = ft_lstnew(ft_strdup("wassimo"));

	ft_lstadd_front(&head, node);
	t_list	*temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	//printf("\n");
	ft_lstclear(&head, del);
	if (head == NULL)
		printf("list cleared c:\n");
	else
		printf("list not cleared :c\n");
	return 0;
} */