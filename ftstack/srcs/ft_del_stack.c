#include "ftstack.h"

void    ft_del_stack(t_stack *stack)


{
    t_stack *cur_stack;
    t_stack *next_stack;
    size_t  *stack_size;

    if (!stack)
        return ;
    *(stack->stack_size) = 0;
    free(stack->stack_size);
    next_stack = stack;
    while (next_stack)
    {
        cur_stack = next_stack;
        next_stack = next_stack->next;
        ft_del_stack_elem(&cur_stack);
    }
}