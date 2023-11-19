#include "monty.h"

/**
 *  get_free - Free stacks
 *
 *  @stack: Stacks point
 *  Returns: Voidd
 */

void get_free(stack_t *stack)
{
if (stack)
{
get_free(stack->next);
free(stack);
}
}
