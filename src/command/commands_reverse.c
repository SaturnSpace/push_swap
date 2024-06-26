/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:32:00 by acarpent          #+#    #+#             */
/*   Updated: 2024/04/29 16:47:56 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_frst *stack, int text)
{
	if (stack->size_a < 2 || stack->size_b < 2)
		return ;
	ft_ra(stack, 0);
	ft_rb(stack, 0);
	if (text)
		write(1, "rr\n", 3);
}

void	ft_rrr(t_frst *stack, int text)
{
	if (stack->size_a < 2 || stack->size_b < 2)
		return ;
	ft_rra(stack, 0);
	ft_rrb(stack, 0);
	if (text)
		write(1, "rrr\n", 4);
}

void	ft_rra(t_frst *stack, int text)
{
	t_stack	*tmp;
	t_stack	*head;

	if (stack->size_a < 2)
		return ;
	tmp = stack->a;
	head = stack->a;
	stack->a = stack->a->next;
	while (stack->a->next != head)
		stack->a = stack->a->next;
	if (text)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_frst *stack, int text)
{
	t_stack		*tmp;
	t_stack		*head;

	if (stack->size_b < 2)
		return ;
	tmp = stack->b;
	head = stack->b;
	stack->b = stack->b->next;
	while (stack->b->next != head)
		stack->b = stack->b->next;
	if (text)
		write(1, "rrb\n", 4);
}
