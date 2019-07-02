/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dar_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <ggrimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:24:54 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/02 23:27:05 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftdar.h"

size_t	ft_dar_size(char **dar)
{
	size_t	size;

	size = 0;
	if (!dar)
		return (size);
	while (dar[size])
		size++;
	return (size);
}
