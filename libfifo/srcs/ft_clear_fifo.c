/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_fifo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:42:15 by olegmulko         #+#    #+#             */
/*   Updated: 2019/08/07 15:30:42 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfifo.h"

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
