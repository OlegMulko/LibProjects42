#include "ftstack.h"

t_stack *ft_newstack(size_t id, void *data, size_t *stack_size)
{
    t_stack *newstack;

    if (!(newstack = (t_stack *)malloc(sizeof(t_stack))))
        return (NULL);
    newstack->id = id;
    newstack->data = data;
    newstack->stack_size = stack_size;
    newstack->next = NULL;
    return (newstack);
}