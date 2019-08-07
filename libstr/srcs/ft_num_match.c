/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_match.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:21:38 by ggrimes           #+#    #+#             */
/*   Updated: 2019/08/07 15:33:34 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

size_t	ft_num_match(char **str, char *arg)
{
	int		i;
	size_t	count;

	i = -1;
	count = 0;
	if (!str || !arg)
		return (count);
	while (str[++i])
		if (ft_match(str[i], arg))
			count++;
	return (count);
}
