/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:28:55 by olegmulko         #+#    #+#             */
/*   Updated: 2019/08/06 15:42:08 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstack.h"

t_stack	*ft_newstack(size_t id, void *data, size_t **stack_size)
{
	t_stack	*newstack;

	if (!(newstack = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	newstack->id = id;
	newstack->data = data;
	newstack->stack_size = *stack_size;
	newstack->next = NULL;
	return (newstack);
}
