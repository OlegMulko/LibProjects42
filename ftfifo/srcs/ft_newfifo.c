/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newfifo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:37:24 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/19 12:36:25 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftfifo.h"

t_fifo	*ft_newfifo(size_t id, void *data, size_t **fifo_size)
{
	t_fifo	*newfifo;

	if (!(newfifo = (t_fifo *)malloc(sizeof(t_fifo))))
		return (NULL);
	newfifo->id = id;
	newfifo->data = data;
	newfifo->fifo_size = *fifo_size;
	newfifo->next = NULL;
	newfifo->last = NULL;
	return (newfifo);
}
