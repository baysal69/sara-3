/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:24:28 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/01 17:27:53 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(ps_list **stack_a)
{	
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	ps_list *first = *stack_a;
	ps_list *second = first->next;
	
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;

	*stack_a = second;
	
	write(1, "sa\n", 3);
}

void	ft_sb(ps_list **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	ps_list *first = *stack_b;
	ps_list *second = first->next;
	
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	
	write(1, "sb\n", 3);
}

void ft_ss(ps_list **stack_b, ps_list **stack_a)
{
	if (*stack_a && (*stack_a)->next)
		ft_sa(stack_a);
	//passin the reference to stack, so f can wory with original stack
	if (*stack_b && (*stack_b)->next)
		ft_sb(stack_b);

	write(1, "ss\n", 3);
}

void ft_pa(ps_list **stack_b, ps_list **stack_a)
{
	if (*stack_b == NULL)
		return ;
	ps_list *tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	
	tmp->next = *stack_a;

	if (*stack_a)
		(*stack_a)->prev = tmp;
	*stack_a = tmp;

	write(1, "pa\n", 3);
}

void	ft_pb(ps_list **stack_b, ps_list **stack_a)
{
	if (*stack_a == NULL)
		return ;
	ps_list *tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;

	tmp->next = *stack_b;

	if (*stack_b)
		(*stack_b)->prev = tmp;
	*stack_b = tmp;

	write(1, "pb\n", 3);
}
