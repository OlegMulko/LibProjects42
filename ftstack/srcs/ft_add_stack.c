#include "ftstack.h"

t_stack *ft_add_stack(t_stack *stack, void *data)
{
    t_stack *newstack;

    if (!stack || !data)
        return (NULL);
    *(stack->stack_size)++;
    if (!(newstack = ft_newstack(*(stack->stack_size), data, stack->stack_size)))
        return (NULL);
    newstack->next = stack;
    return (newstack);    
}