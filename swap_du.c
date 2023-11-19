#include "monty.h"

/**
 * get_swap - functions this swap a tops twoo elementss a stacks
 * 1. upon succes, nothing
 * @stack: point a tops off stacks
 * 2. upon faill, EXIT_FAILURE
 * Descriptions: 3. swaps
 * @line_number: where this lines num appear
 * Returns: see belows
 */
void get_swap(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;
if ((*stack == NULL) || ((*stack)->next == NULL))
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
else if (*stack)
{
first = *stack;
second = first->next;
*stack = second;
first->next = second->next;
if (second->next != NULL)
{
second->next->prev = first;
}
second->prev = NULL;
second->next = first;
first->prev = second;
}
}
