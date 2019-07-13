
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

#endif
