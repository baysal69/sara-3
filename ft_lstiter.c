/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:59:43 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/13 20:24:58 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* static void ttoupper(void *content)
{
	char *str = (char *)content;

	while(*str)
	{
		*str = (char)ft_toupper((unsigned char)*str);
		str++;
	}
}
void	del(void *content)
{
	if (content)
		free(content);
}
int main(void)
{
	t_list *node1 = ft_lstnew(ft_strdup("sara"));
	t_list *node2 = ft_lstnew(ft_strdup("wassim"));
	node1->next = node2;
	
	ft_lstiter(node1, ttoupper);
	t_list *temp = node1;
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
    ft_lstclear(&node1, del);
	free(node1);
	free(node2);
	return 0;
} */