/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:55:31 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/01 16:26:47 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
	struct s_list *prev;
}	ps_list;

void	ft_sa(ps_list **stack_a);
void	ft_sb(ps_list **stack_b);
void	ft_ss(ps_list **stack_b, ps_list **stack_a);
void	ft_pa(ps_list **stack_b, ps_list **stack_a);
void	ft_pb(ps_list **stack_b, ps_list **stack_a);
void	ft_ra(ps_list **stack_a);
void	ft_rb(ps_list **stack_b);
void	ft_rr(ps_list **stack_b, ps_list **stack_a);
void	ft_rra(ps_list **stack_a);
void	ft_rrb(ps_list **stack_b);
void	ft_rrr(ps_list **stack_b, ps_list **stack_a);

#endif