/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:56:56 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/01 16:30:11 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
rra (reverse rotate a) ->  shift down all elements of stack a by 1
							the last element becomes first

							the last element becomes first
rrr (rra and rrb at the same time)
*/
void	ft_rra(ps_list **stack_a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	ps_list *tmp = *stack_a;
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack_a;
	*stack_a = tmp;

	write(1, "rra\n", 4);

}

//rrb (reverse rotate b) ->  shift down all elements of stack b by 1
void	ft_rrb(ps_list **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	ps_list *tmp = *stack_b;
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack_b;
	*stack_b = tmp;

	write(1, "rrb\n", 4);
}

void	ft_rrr(ps_list **stack_b, ps_list **stack_a)
{
	if (*stack_a && (*stack_a)->next)
		ft_rra(stack_a);
	if (*stack_b && (*stack_b)->next)
		ft_rrb(stack_b);
	
	write(1, "rrr\n", 4);
}
