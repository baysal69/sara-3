/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:49:54 by sel-khao          #+#    #+#             */
/*   Updated: 2025/03/05 17:36:38 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Assuming t_ps structure is defined as follows:
typedef struct s_ps
{
    int data;
    struct s_ps *next;
    struct s_ps *prev;
} t_ps;

// Prototypes for your functions
void quick_sort(t_ps **stack_a, t_ps **stack_b);
void partition(t_ps **stack_a, t_ps **stack_b);
void insertion(t_ps **stack_a);

// Helper functions for stack operations (you need to implement these)
void ft_pa(t_ps **stack_a, t_ps **stack_b);
void ft_pb(t_ps **stack_a, t_ps **stack_b);
void ft_sa(t_ps **stack_a, int print);
void ft_ra(t_ps **stack_a, int print);

// Helper function to create a new node
t_ps *new_node(int data)
{
    t_ps *node = (t_ps *)malloc(sizeof(t_ps));
    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

// Function to add node to the stack
void add_node(t_ps **stack, int data)
{
    t_ps *node = new_node(data);
    if (!node)
        return ;
    
    node->next = *stack;
    if (*stack)
        (*stack)->prev = node;
    *stack = node;
}

// Function to print the stack
void print_stack(t_ps *stack)
{
    t_ps *current = stack;
    while (current)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    t_ps *stack_a = NULL;
    t_ps *stack_b = NULL;

    // Initialize the stack with some values
    add_node(&stack_a, 10);
    add_node(&stack_a, 5);
    add_node(&stack_a, 3);
    add_node(&stack_a, 8);
    add_node(&stack_a, 7);
    add_node(&stack_a, 1);

    printf("Initial stack A: ");
    print_stack(stack_a);
    // Perform the hybrid sort
    quick_sort(&stack_a, &stack_b);

    printf("Sorted stack A: ");
    print_stack(stack_a);

    // Free memory (you should free the nodes properly in your project)
    while (stack_a)
    {
        t_ps *tmp = stack_a;
        stack_a = stack_a->next;
        free(tmp);
    }

    return 0;
}
