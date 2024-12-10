/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:08:00 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/10 19:01:47 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		free(*lst);
		*lst = (*lst)->next;
	}
}

/* static void	 del(void *content)
{
	if (content)
		free(content);
} */