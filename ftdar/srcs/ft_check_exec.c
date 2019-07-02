/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_exec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <ggrimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:02:13 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/02 23:28:47 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftdar.h"

int	ft_check_exc(char *str, char **exc)
{
	int	i;

	if (!str || !exc)
		return (0);
	i = -1;
	while (exc[++i])
		if (!ft_strcmp(exc[i], str))
			return (1);
	return (0);
}
