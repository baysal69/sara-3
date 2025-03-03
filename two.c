/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:54:50 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/03 20:04:55 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_ps **stack_a, int i)
{
	t_ps	*tmp;
	t_ps	*last;

	tmp = *stack_a;
	last = *stack_a;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
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

	tmp = *stack_b;
	last = *stack_b;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
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
