#include "monty.h"

/**
 *  get_free - Free stack
 *
 *  @stack: Stack pointes
 *  Return: Voidd
 */

void get_free(stack_t *stack)
{
if (stack)
{
free(stack);
get_free(stack->next);
}
}
