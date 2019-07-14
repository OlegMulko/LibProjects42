/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:31:19 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/14 21:34:14 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstack.h"

void	ft_del_stack_elem(t_stack **stack)
{
	(*stack)->id = 0;
	if (*((*stack)->stack_size) == 0)
		free((*stack)->stack_size);
	(*stack)->next = NULL;
	stack = NULL;
}
