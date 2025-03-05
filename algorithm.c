/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:05:05 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/05 18:31:01 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_ps *lst)
{
	int		i;
	t_ps	*ptr;

	i = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

void	partition(t_ps **stack_a, t_ps **stack_b)
{
	t_ps	*tmp;
	int	*pivot;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	pivot = (*stack_a)->data;
	tmp = (*stack_a)->next;
	while (tmp)
	{
		if (tmp->data < pivot->data)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a, 1);
		tmp = tmp->next;
	}
	while (*stack_a && (*stack_a)->data != pivot)
		ft_ra(stack_a, 1);
}

void	insertion(t_ps **stack_a)
{
	t_ps	*current;

	current = *stack_a;
	while (current && current->next)
	{
		if (current->data > current->next->data)
			ft_sa(stack_a, 1);
		else
		current = current->next;
	}
}

void	quick_sort(t_ps **stack_a, t_ps **stack_b)
{
	if (ft_lstsize(*stack_a) <= 50)
	{
		insertion(stack_a);
		return ;
	}
	partition(stack_a, stack_b);
	quick_sort(stack_a, stack_b);
	quick_sort(stack_b, stack_a);
}
