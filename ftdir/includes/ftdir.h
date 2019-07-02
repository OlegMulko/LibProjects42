/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftdir.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <ggrimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:01:35 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/03 00:01:46 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTDIR_H
# define FTDIR_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <dirent.h>

size_t	ft_size_dir(char *dirpath);
short	ft_dir_flag(short flag, unsigned char d_type);
char	**ft_dir_content(char *dirpath, short flag);

#endif
