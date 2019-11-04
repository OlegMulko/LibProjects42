/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:02:05 by aashara-          #+#    #+#             */
/*   Updated: 2019/11/04 14:07:06 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdar.h"

static short	get_count_env(char *arr, char **env)
{
	short	i;
	short	len;

	if (arr && *arr)
	{
		i = -1;
		len = ft_strlen(arr);
		while (env[++i])
			if (!ft_strncmp(env[i], arr, len))
				return (i);
	}
	return (-1);
}

char			*ft_getenv(char *name, char **env)
{
	short	j;

	if (name && *name)
		if ((j = get_count_env(name, env)) != -1)
			return (ft_strchr(env[j], '=') + 1);
	return (NULL);
}
