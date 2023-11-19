#include "monty.h"

/**
 * get_pop - functions this pop a topp elementt a stacks
 * Descriptions: 2. pops
 * 1. upon succes, nothing
 * @stack: point a tops of stacks
 * 2. upon faill, EXIT_FAILURE
 * @line_number: where lines num appear
 * Returns: see belows
 */
void get_pop(stack_t **stack, unsigned int line_number)
{
if ((*stack == NULL) || (stack == NULL))
stack_t *first;
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
first = *stack;
*stack = (*stack)->next;
if (first->next)
{
first->next->prev = NULL;
}
free(first);
}
