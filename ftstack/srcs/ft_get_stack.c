/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:54:42 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/14 22:37:34 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstack.h"

void	*ft_get_stack(t_stack **stack)
{
	void	*data;
	t_stack	*delstack;

	if (!*stack)
		return (NULL);
	data = (*stack)->data;
	delstack = *stack;
	*stack = (*stack)->next;
	*((*stack)->size)--;
	ft_del_stack(delstack);
	return (data);
}
