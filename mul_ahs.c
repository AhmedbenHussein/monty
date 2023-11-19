#include "monty.h"

/**
 * get_mul - functions that multipl a top twoo element the stacks
 * Description: 8. mull
 * 1. upon success, nothing
 * @stack: point to tops a stacks
 * 2. upon fail, EXIT_FAILURE
 * @line_number: where the linee num appear
 * Returns: see belows
 */
void get_mul(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;
if ((*stack == NULL) || ((*stack)->next == NULL))
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
fclose(file);
exit(EXIT_FAILURE);
}
else
{
first = *stack;
second = first->next;
second->n *= first->n;
*stack = second;
(*stack)->prev = NULL;
free(first);
}
}
