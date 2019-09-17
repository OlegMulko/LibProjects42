/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_hash_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:11:50 by aashara-          #+#    #+#             */
/*   Updated: 2019/09/17 19:22:23 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhash.h"

t_hash	**free_hash_table(t_hash **table, size_t len)
{
	size_t	i;
	t_hash	*next;
	t_hash	*copy;

	if (table && len > 0)
	{
		i = 0;
		while (i < len)
		{
			next = table[i];
			while (next)
			{
				ft_memdel((void**)&(next->data));
				next->hash_key = 0;
				copy = next;
				next = next->next;
				ft_memdel((void**)&(copy));
			}
			i++;
		}
		ft_memdel((void**)&table);
	}
	return (table);
}
