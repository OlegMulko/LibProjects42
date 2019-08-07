/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newfifo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:37:24 by olegmulko         #+#    #+#             */
/*   Updated: 2019/08/07 15:31:04 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfifo.h"

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
