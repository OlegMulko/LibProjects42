/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dardup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 16:59:37 by aashara-          #+#    #+#             */
/*   Updated: 2019/07/05 17:00:54 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftdar.h"

char		**ftdardup(char **arr)
{
	short	i;
	char	**arr1;

	if (!arr)
		return (NULL);
	if (!(arr1 = (char**)malloc(sizeof(char*) * (double_arr_len(arr) + 1))))
		return (NULL);
	i = -1;
	while (arr[++i])
		if (!(arr1[i] = ft_strdup(arr[i])))
			return (NULL);
	arr1[i] = NULL;
	return (arr1);
}
