/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_hash.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:58:11 by aashara-          #+#    #+#             */
/*   Updated: 2019/09/17 15:11:05 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhash.h"

void	push_hash(t_hash **table, char *hash_str, char *data, size_t size)
{
	size_t	index;
	size_t	key;
	t_hash	*hash;

	if (!table || !data)
		return ;
	key = djb2_hash_function(hash_str);
	index = hash_index(key, size);
	hash = table[index];
	while (hash)
		hash = hash->next;
	hash = init_hash();
	hash->data = data;
	hash->hash_key = key;
}
