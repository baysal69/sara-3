/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:49:54 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/01 17:25:32 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
	struct s_list *prev;
}	ps_list;

void	ft_rra(ps_list **stack_a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	ps_list *tmp = *stack_a;
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack_a;
	*stack_a = tmp;

	write(1, "rra\n", 4);

}

//rrb (reverse rotate b) ->  shift down all elements of stack b by 1
void	ft_rrb(ps_list **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	ps_list *tmp = *stack_b;
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack_b;
	*stack_b = tmp;

	write(1, "rrb\n", 4);
}

void	ft_rrr(ps_list **stack_b, ps_list **stack_a)
{
	if (*stack_a && (*stack_a)->next)
		ft_rra(stack_a);
	if (*stack_b && (*stack_b)->next)
		ft_rrb(stack_b);
	
	write(1, "rrr\n", 4);
}

int main(void)
{
    // Create stack A
    ps_list *stack_a = NULL;
    ps_list *node1 = malloc(sizeof(ps_list));
    node1->data = 2;
    node1->next = NULL;
    node1->prev = NULL;
    stack_a = node1;

    ps_list *node2 = malloc(sizeof(ps_list));
    node2->data = 7;
    node2->next = NULL;
    node2->prev = stack_a;
    stack_a->next = node2;

    ps_list *node3 = malloc(sizeof(ps_list));
    node3->data = 5;
    node3->next = NULL;
    node3->prev = node2;
    node2->next = node3;

    // Create stack B
    ps_list *stack_b = NULL;
    ps_list *node4 = malloc(sizeof(ps_list));
    node4->data = 8;
    node4->next = NULL;
    node4->prev = NULL;
    stack_b = node4;

    ps_list *node5 = malloc(sizeof(ps_list));
    node5->data = 4;
    node5->next = NULL;
    node5->prev = node4;
    node4->next = node5;

    ps_list *node6 = malloc(sizeof(ps_list));
    node6->data = 1;
    node6->next = NULL;
    node6->prev = node5;
    node5->next = node6;

    // Print stack A before rra/rrb/rrr
    printf("Before rra/rrb/rrr: Stack A: ");
    ps_list *tmp = stack_a;
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    // Print stack B before rra/rrb/rrr
    tmp = stack_b;
    printf("Before rra/rrb/rrr: Stack B: ");
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    // Perform the rra operation (reverse rotate stack A)
    ft_rra(&stack_a);

    // Print stack A and B after rra
    printf("After rra: Stack A: ");
    tmp = stack_a;
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    printf("After rra: Stack B: ");
    tmp = stack_b;
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    // Perform the rrb operation (reverse rotate stack B)
    ft_rrb(&stack_b);

    // Print stack A and B after rrb
    printf("After rrb: Stack A: ");
    tmp = stack_a;
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    printf("After rrb: Stack B: ");
    tmp = stack_b;
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    // Perform the rrr operation (reverse rotate both stack A and stack B)
    ft_rrr(&stack_a, &stack_b);

    // Print stack A and B after rrr
    printf("After rrr: Stack A: ");
    tmp = stack_a;
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    printf("After rrr: Stack B: ");
    tmp = stack_b;
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    return 0;
}
