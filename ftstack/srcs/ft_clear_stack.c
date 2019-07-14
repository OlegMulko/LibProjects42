/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:34:23 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/14 22:40:50 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstack.h"

void	ft_clear_stack(t_stack **stack)
{
	t_stack	*cur_stack;
	t_stack	*next_stack;

	if (!*stack)
		return ;
	next_stack = *stack;
	while (next_stack)
	{
		cur_stack = next_stack;
		*(cur_stack->stack_size)--;
		next_stack = next_stack->next;
		ft_del_stack(&cur_stack);
	}
	stack = NULL;
}
