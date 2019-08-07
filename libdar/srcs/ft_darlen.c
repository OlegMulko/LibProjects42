/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_darlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:24:54 by ggrimes           #+#    #+#             */
/*   Updated: 2019/08/07 15:27:57 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdar.h"

size_t	ft_darlen(char **dar)
{
	size_t	size;

	size = 0;
	if (!dar)
		return (size);
	while (dar[size])
		size++;
	return (size);
}
