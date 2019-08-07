/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:05:38 by ggrimes           #+#    #+#             */
/*   Updated: 2019/08/07 15:30:07 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdir.h"

size_t	ft_size_dir(char *dirpath)
{
	size_t	size;
	DIR		*dirp;

	size = 0;
	if (!dirpath)
		return (size);
	if (!(dirp = opendir(dirpath)))
		return (0);
	while (readdir(dirp))
		size++;
	if (closedir(dirp) == -1)
		return (0);
	return (size);
}
