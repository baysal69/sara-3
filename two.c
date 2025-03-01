/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:54:50 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/01 15:49:56 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//ra (rotate A) -> last becomes first, first becomes last
void ft_ra(ps_list **stack_a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	ps_list *tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	ps_list *last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	tmp->next = NULL;
	last->next = tmp;
	tmp->prev = last;

	write (1, "ra\n", 3);
}

//rb (rotate B) -> last becomes first, first becomes last
void ft_rb(ps_list **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	ps_list *tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	ps_list *last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	tmp->prev = last;

	write (1, "rb\n", 3);
}

//rr -> ra and rb at the same time
void	ft_rr(ps_list **stack_b, ps_list **stack_a)
{
	if (*stack_b && (*stack_b)->next)
		ft_rb(stack_b);
	if (*stack_a && (*stack_a)->next)
		ft_ra(stack_a);
	
	write(1, "rr\n", 3);
}