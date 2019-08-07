/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:21:10 by ggrimes           #+#    #+#             */
/*   Updated: 2019/08/07 15:33:29 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

int	ft_match(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	else if (!*s1 && !*s2)
		return (1);
	else if (*s1 != '\0' && *s2 == '*')
		return (ft_match(s1 + 1, s2) || ft_match(s1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '*')
		return (ft_match(s1, s2 + 1));
	else if (*s1 == *s2)
		return (ft_match(s1 + 1, s2 + 1));
	else
		return (0);
}
