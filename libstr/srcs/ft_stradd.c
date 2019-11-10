/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 18:26:24 by aashara-          #+#    #+#             */
/*   Updated: 2019/11/10 18:41:26 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

char	*ft_stradd(char *buf, char *s, size_t i)
{
	char	str[10000];

	if (!s || !buf)
		return (buf);
	if (i >= ft_strlen(buf))
		return (ft_strcat(buf, s));
	ft_strcpy(str, buf + i);
	ft_strcpy(buf + i, s);
	ft_strcpy(buf + i + ft_strlen(s), str);
	return (buf);
}
