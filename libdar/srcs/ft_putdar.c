/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:02:56 by aashara-          #+#    #+#             */
/*   Updated: 2019/09/22 18:05:49 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdar.h"

void	ft_putdar(char *arr)
{
	int	j;

	j = -1;
	while (arr[++j])
		ft_putstr(arr[j]);
}
