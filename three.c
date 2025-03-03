/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:56:56 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/03 20:04:55 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_ps **stack_a, int i)
{
	t_ps	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = *stack_a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack_a;
	*stack_a = tmp;
	if (i == 1)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_ps **stack_b, int i)
{
	t_ps	*tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = *stack_b;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack_b;
	*stack_b = tmp;
	if (i == 1)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_ps **stack_b, t_ps **stack_a)
{
	if (*stack_a && (*stack_a)->next)
		ft_rra(stack_a, 0);
	if (*stack_b && (*stack_b)->next)
		ft_rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
