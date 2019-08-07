/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dar_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:10:29 by ggrimes           #+#    #+#             */
/*   Updated: 2019/08/07 15:27:48 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdar.h"

char	**ft_dar_add(char **dest, char **src, char **exc)
{
	int		i;
	int		j;
	char	**dar;
	int		len;

	if (!src && !*src)
		return (NULL);
	len = ft_darlen(dest);
	len += ft_darlen(src);
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
