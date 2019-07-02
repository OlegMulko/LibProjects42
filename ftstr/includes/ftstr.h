/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstr.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <ggrimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:14:35 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/03 00:14:56 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSTR_H
# define FTSTR_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

size_t	ft_get_cnt_words(const char *str, char *spr);
char	*ft_last_word_pos(const char *str, char *seps);
int		ft_is_str_contain(char *str, char sym);
char	*ft_del_sym_str(char *str, char *delsym);
int		ft_match(char *s1, char *s2);
size_t	ft_num_match(char **str, char *arg);

#endif
