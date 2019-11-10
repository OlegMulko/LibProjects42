/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_el.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 18:24:12 by aashara-          #+#    #+#             */
/*   Updated: 2019/11/10 18:33:04 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

char		*ft_strdel_el(char *buf, size_t i)
{
	if (i >= ft_strlen(buf) || i < 0)
		return (buf);
	ft_strcpy(buf + i, buf + i + 1);
	return (buf);
}
