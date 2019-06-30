/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_array_contain.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 21:41:09 by ggrimes           #+#    #+#             */
/*   Updated: 2019/06/27 21:41:11 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ftstr.h"

int ft_is_str_contain(char *str, char sym)
{
    size_t  i;

    if (!str)
        return (0);
    i = -1;
    while (str[++i])
        if (str[i] == sym)
            return (1);
    return (0);
}