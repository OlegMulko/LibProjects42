/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:02:05 by aashara-          #+#    #+#             */
/*   Updated: 2019/11/24 19:56:55 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdar.h"

char			*ft_getenv(char *name, char **varlist)
{
	char	*tmp;
	long	varlen;

	if (!name || !*name)
		return (NULL);
	while (*varlist)
	{
		tmp = ft_strchr(*varlist, '=');
		varlen = tmp - *varlist;
		if ((long)ft_strlen(name) == varlen &&
		!ft_strncmp(name, *varlist, varlen))
			return (tmp + 1);
		varlist++;
	}
	return (NULL);
}
