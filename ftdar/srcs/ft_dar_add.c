/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dar_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:10:29 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/02 23:14:06 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftdar.h"

char	**ft_strarr_add(char **dest, char **src, char **exc)
{
	int		i;
	int		j;
	char	**str_arr;
	int		len;

	if (!src && !*src)
		return (NULL);
	len = ft_strarr_len(dest);
	len += ft_strarr_len(src);
	CHECK((str_arr = (char **)malloc(sizeof(char *) * len + 1)));
	i = (dest) ? -1 : 0;
	if (dest)
		while (dest[++i])
			str_arr[i] = ft_strdup(dest[i]);
	j = -1;
	while (src[++j])
		if (!ft_cheak_exc(src[j], exc))
			str_arr[i++] = ft_strdup(src[j]);
	str_arr[i] = NULL;
	return (str_arr);
}
