#include "ftstack.h"

t_stack *ft_newstack(size_t id, void *data, size_t *stack_size)
{
    t_stack *newstack;

    if (!(newstack = (t_stack *)malloc(sizeof(t_stack))))
        return (NULL);
    newstack->id = id;
    newstack->data = data;
    if (!stack_size)
    {
        if (!(stack_size = (size_t *)malloc(sizeof(size_t))))
        {
            free(newstack);
            return (NULL);
        }
        *stack_size = 1;
    }
    newstack->stack_size = stack_size;
    newstack->next = NULL;
    return (newstack);
}