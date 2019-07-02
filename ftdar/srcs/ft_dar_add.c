/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dar_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <ggrimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:10:29 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/02 23:54:29 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftdar.h"

char	**ft_dar_add(char **dest, char **src, char **exc)
{
	int		i;
	int		j;
	char	**dar;
	int		len;

	if (!src && !*src)
		return (NULL);
	len = ft_dar_size(dest);
	len += ft_dar_size(src);
	CHECK((dar = (char **)malloc(sizeof(char *) * (len + 1))));
	i = (dest) ? -1 : 0;
	if (dest)
		while (dest[++i])
			dar[i] = ft_strdup(dest[i]);
	j = -1;
	while (src[++j])
		if (!ft_check_exc(src[j], exc))
			dar[i++] = ft_strdup(src[j]);
	dar[i] = NULL;
	return (dar);
}
