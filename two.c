/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:54:50 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/05 09:37:40 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_ps **stack_a, int i)
{
	t_ps	*tmp;
	t_ps	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	tmp->next = NULL;
	last->next = tmp;
	tmp->prev = last;
	if (i == 1)
		write (1, "ra\n", 3);
}

void	ft_rb(t_ps **stack_b, int i)
{
	t_ps	*tmp;
	t_ps	*last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	tmp->prev = last;
	if (i == 1)
		write (1, "rb\n", 3);
}

void	ft_rr(t_ps **stack_b, t_ps **stack_a)
{
	if (*stack_b && (*stack_b)->next)
		ft_rb(stack_b, 0);
	if (*stack_a && (*stack_a)->next)
		ft_ra(stack_a, 0);
	write(1, "rr\n", 3);
}
