/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftdar.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <ggrimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:04:23 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/03 00:03:19 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTDAR_H
# define FTDAR_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# define CHECK(val) if (!val) return (0)
# define CHECKV(val) if (!val) return

int		ft_check_exc(char *str, char **exc);
char	**ft_dar_add(char **dest, char **src, char **exc);
size_t	ft_dar_size(char **dar);

#endif
