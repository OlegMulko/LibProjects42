/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_fifo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:41:44 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/19 12:14:52 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftfifo.h"

void	ft_del_fifo(t_fifo **fifo)
{
	if (!fifo || !*fifo)
		return ;
	(*fifo)->id = 0;
	(*((*fifo)->fifo_size))--;
	if (*((*fifo)->fifo_size) == 0)
	{
		free((*fifo)->fifo_size);
		free((*fifo)->last);
	}
	(*fifo)->next = NULL;
	(*fifo)->last = NULL;
	free(*fifo);
	fifo = NULL;
}
