/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 01:40:31 by filip             #+#    #+#             */
/*   Updated: 2019/07/05 18:19:32 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftdar.h"

void		free_double_arr(char **arr)
{
	short	i;

	if (!arr)
		return ;
	i = -1;
	while (arr[++i])
		ft_memdel((void**)&(arr[i]));
	free(arr);
	arr = NULL;
}
