/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:55:31 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/05 12:34:20 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	struct s_list	*prev;
}	t_ps;

void	ft_sa(t_ps **stack_a, int i);
void	ft_sb(t_ps **stack_b, int i);
void	ft_ss(t_ps **stack_b, t_ps **stack_a);
void	ft_pa(t_ps **stack_b, t_ps **stack_a);
void	ft_pb(t_ps **stack_b, t_ps **stack_a);
void	ft_ra(t_ps **stack_a, int i);
void	ft_rb(t_ps **stack_b, int i);
void	ft_rr(t_ps **stack_b, t_ps **stack_a);
void	ft_rra(t_ps **stack_a, int i);
void	ft_rrb(t_ps **stack_b, int i);
void	ft_rrr(t_ps **stack_b, t_ps **stack_a);
void	quick_sort(t_ps **stack_a, t_ps **stack_b);
void	partition(t_ps **stack_a, t_ps **stack_b);
long	dupli(int argc, char **argv);
int	vali_num(int argc, char **argv);

#endif