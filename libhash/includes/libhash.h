/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libhash.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:58:41 by aashara-          #+#    #+#             */
/*   Updated: 2019/09/17 17:22:24 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBHASH_H
# define LIBHASH_H

# include "libft.h"
# include <stdlib.h>

typedef struct		s_hash
{
	char			*data;
	size_t			hash_key;
	struct s_hash	*next;
}					t_hash;

void				free_hash_table(t_hash **table, size_t size);
t_hash				**init_hash_table(size_t size);
t_hash				*init_hash(void);
size_t				hash_index(size_t key, size_t size);
size_t				djb2_hash_function(char *str);
t_hash				*set_hash(char *hash_str, char *data, size_t size);
char				*get_hash_data(t_hash **table, char *hash_str,
size_t size);
#endif
