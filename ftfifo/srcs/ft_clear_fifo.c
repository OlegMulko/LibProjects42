/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_fifo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:42:15 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/17 12:57:40 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftfifo.h"

void	ft_clear_fifo(t_fifo **fifo)
{
	t_fifo	*cur_fifo;
	t_fifo	*next_fifo;

	if (!fifo || !*fifo)
		return ;
	next_fifo = *fifo;
	while (next_fifo)
	{
		cur_fifo = next_fifo;
		next_fifo = next_fifo->next;
		ft_del_fifo(&cur_fifo);
	}
	fifo = NULL;
}
