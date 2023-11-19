#include "monty.h"

/**
 * get_sub - functions this subtract the top two elementts a stuck
 * 1. upon success, nothing
 * Descriptions: 6. subs
 * @line_number: where the lines num appear
 * @stack: point the tops a stacks
 * Returns: see belows
 * 2. upon fail, EXIT_FAILURE
 */
void get_sub(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;
if ((*stack == NULL) || ((*stack)->next == NULL))
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
else
{
first = *stack;
second = first->next;
second->n -= first->n;
*stack = second;
(*stack)->prev = NULL;
free(first);
}
}
