/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dir_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:05:10 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/03 00:05:25 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftdir.h"

short	ft_dir_flag(short flag, unsigned char d_type)
{
	if (!flag)
		return (1);
	else if (flag == 1 && d_type != 4)
		return (1);
	else if (flag == 2 && d_type == 4)
		return (1);
	return (0);
}
