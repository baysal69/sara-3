/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:24:28 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/21 23:09:22 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//double linked list
typedef struct s_list
{
	int data;
	struct s_list *next;
	struct s_list *prev;
}	ps_list;

//sa (swap A) -> swap first top 2 elements of stack A
//one pinter holds the memory address of the first node(head)
//double means passing address of stack_a, not just value it holds
//double pointer cuz i wanna modify the original value
void ft_sa(ps_list **stack_a)
{
	ps_list *tmp;
	
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
	
	write(1, "sa", 2);
}

//sb (swap B) -> swap first top 2 elements of stack B
void ft_sa(ps_list **stack_b)
{
	ps_list *tmp;
	
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
	
	write(1, "sb", 2);
}

//ss (swap both) -> swap top 2 of both stack A and B
//checkin if theres at lst 2 elements for stack
void ft_ss(ps_list **stack_b, ps_list **stack_a)
{
	if (*stack_a && (*stack_a)->next != NULL)
		ft_sa(stack_a);
	if (*stack_b && (*stack_b)->next != NULL)
		ft_sb(stack_b);

	write(1, "ss", 2);
}

//pa (push A) -> take top element from stack B and push into A
void ft_pa(ps_list **stack_b, ps_list **stack_a)
{
	if (*stack_b == NULL)
		return ;
	ps_list *tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->prev = NULL;
	

	write(1, "pa", 2);
}




/*


pb (push B) -> take top of A, push it in B
				do nothing if a is empty



				If we don’t use **stack_a, the function would swap nodes inside
itself but the caller would still see the old head*/