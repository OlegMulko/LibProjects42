/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dar_quick_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:24:23 by aashara-          #+#    #+#             */
/*   Updated: 2020/01/21 18:27:52 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdar.h"

void	ft_dar_quick_sort(char **res, size_t size)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	if (size < 2)
		return ;
	i = 0;
	j = size - 1;
	while (i <= j)
	{
		while (ft_strcmp(res[i], res[size / 2]) < 0)
			++i;
		while (ft_strcmp(res[j], res[size / 2]) > 0)
			--j;
		if (i <= j)
		{
			tmp = res[i];
			res[i++] = res[j];
			res[j--] = tmp;
		}
	}
	if (j > 0)
		ft_dar_quick_sort(res, j);
	if (size > i)
		ft_dar_quick_sort(res + i, size - i);
}
