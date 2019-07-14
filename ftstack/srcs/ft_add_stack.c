/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:40:29 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/14 22:54:19 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstack.h"

t_stack	*ft_add_stack(t_stack *stack, void *data)
{
	t_stack	*newstack;
	size_t	*stack_size;

	if (!data)
		return (stack);
	if (!stack)
	{
		if (!(stack_size = (size_t *)malloc(sizeof(size_t))))
			return (NULL);
		*stack_size = 1;
	}
	else
	{
		stack_size = stack->stack_size;
		*stack_size++;
	}
	if (!(newstack = ft_newstack(*stack_size,
		data, &stack_size)
		return (NULL);
	newstack->next = stack;
	return (newstack);
}
