/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libdir.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:01:35 by ggrimes           #+#    #+#             */
/*   Updated: 2019/10/23 16:17:12 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDIR_H
# define LIBDIR_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <dirent.h>
# include <sys/stat.h>

size_t	ft_size_dir(char *dirpath);
short	ft_dir_flag(short flag, unsigned char d_type);
char	**ft_dir_content(char *dirpath, short flag);
char	ft_file_type(char *path);
#endif
