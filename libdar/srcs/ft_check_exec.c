/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_exec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:02:13 by ggrimes           #+#    #+#             */
/*   Updated: 2019/08/07 15:27:43 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdar.h"

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
