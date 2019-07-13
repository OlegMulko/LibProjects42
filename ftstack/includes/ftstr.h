
#ifndef FTSTACK_H
# define FTSTACK_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct  s_stack
{
    size_t          id;
    void            *data;
    size_t          *stack_size;
    struct s_stack  *next;
}               t_stack;

t_stack *ft_newstack(size_t id, void *data, size_t *stack_size);
void    ft_del_stack_elem(t_stack **stack);
void    ft_del_stack(t_stack *stack);

#endif
