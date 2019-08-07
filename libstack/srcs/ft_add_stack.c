/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:40:29 by olegmulko         #+#    #+#             */
/*   Updated: 2019/08/07 15:31:22 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstack.h"

static size_t	*ft_size(t_stack *stack);

t_stack			*ft_add_stack(t_stack *stack, void *data)
{
	t_stack	*newstack;
	size_t	*stack_size;

	if (!data)
		return (stack);
	stack_size = ft_size(stack);
	if (!(newstack = ft_newstack(*stack_size, data, &stack_size)))
		return (NULL);
	newstack->next = stack;
	return (newstack);
}

static size_t	*ft_size(t_stack *stack)
{
	size_t	*stack_size;

	if (!stack)
	{
		if (!(stack_size = (size_t *)malloc(sizeof(size_t))))
			return (NULL);
		*stack_size = 1;
	}
	else
	{
		stack_size = stack->stack_size;
		(*stack_size)++;
	}
	return (stack_size);
}
