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

char			*ft_getenv(char *name, char **env)
{
	char *tmp;
	if (!name || !*name)
		return (NULL);
	while (*env)
	{
		tmp = ft_strchr(*env, '=');
		if (!ft_strncmp(name, *env, tmp - *env))
			return (tmp + 1);
		env++;
	}
	return (NULL);
}
