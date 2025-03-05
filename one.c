/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:24:28 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/05 09:37:40 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_ps **stack_a, int i)
{
	t_ps	*first;
	t_ps	*second;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first = *stack_a;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*stack_a = second;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	ft_sb(t_ps **stack_b, int i)
{
	t_ps	*first;
	t_ps	*second;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first = *stack_b;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ft_ss(t_ps **stack_b, t_ps **stack_a)
{
	if (*stack_a && (*stack_a)->next)
		ft_sa(stack_a, 0);
	if (*stack_b && (*stack_b)->next)
		ft_sb(stack_b, 0);
	write(1, "ss\n", 3);
}

void	ft_pa(t_ps **stack_b, t_ps **stack_a)
{
	t_ps	*tmp;

	if (*stack_b == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	tmp->next = *stack_a;
	if (*stack_a)
		(*stack_a)->prev = tmp;
	*stack_a = tmp;
	write(1, "pa\n", 3);
}

void	ft_pb(t_ps **stack_b, t_ps **stack_a)
{
	t_ps	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	tmp->next = *stack_b;
	if (*stack_b)
		(*stack_b)->prev = tmp;
	*stack_b = tmp;
	write(1, "pb\n", 3);
}
