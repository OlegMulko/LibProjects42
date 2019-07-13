#include "ftstack.h"

void    ft_del_stack_elem(t_stack **stack)
{
    (*stack)->id = 0;
    if (*((*stack)->stack_size) == 1)
    {
        *((*stack)->stack_size) = 0;
        free((*stack)->stack_size);
    }
    (*stack)->next = NULL;
    stack = NULL;
}