/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:26:30 by olegmulko         #+#    #+#             */
/*   Updated: 2019/07/14 22:54:47 by olegmulko        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSTACK_H
# define FTSTACK_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct	s_stack
{
	size_t			id;
	void			*data;
	size_t			*stack_size;
	struct s_stack	*next;
}				t_stack;

int	stack_error;

t_stack	*ft_newstack(size_t id, void *data, size_t *stack_size);
void	ft_del_stack(t_stack **stack);
void	ft_clear_stack(t_stack **stack);
t_stack	*ft_add_stack(t_stack *stack, void *data);
void	*ft_get_stack(t_stack **stack);
void	*stack(size_t stack_id, char *method, void *data);

#endif
