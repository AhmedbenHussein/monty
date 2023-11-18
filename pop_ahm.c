#include "monty.h"

/**
 * get_pop - functions that pop the top elementt of the stack
 * Descriptions: 2. pop
 * @stack: point to the top of the stack
 * @line_number: where the linee numbers appear
 * 1. upon successs, nothing
 * 2. upon fail, EXIT_FAILURE
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
