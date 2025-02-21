/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:18:11 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/21 19:10:14 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/*
sa (swap A) -> swap first top 2 elements of stack A
sb (swap B) -> swap first top 2 elements of stack B
ss (swap both) -> swap top 2 of both stack A and B
pa (push A) -> take top element from stack B and push into A
				do nothing if b is empty
pb (push B) -> take top of B, push it in B
				do nothing if a is empty
ra (rotate A) -> last becomes first, first becomes last
rb (rotate B) -> last becomes first, first becomes last
rr -> ra and rb at the same time
rra (reverse rotate a) ->  shift down all elements of stack a by 1
							the last element becomes first
rrb (reverse rotate b) ->  shift down all elements of stack b by 1
							the last element becomes first
rrr (rra and rrb at the same time)
*/