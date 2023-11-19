#include "monty.h"

/**
 * get_rotl - functions that rotate a taill to tops
 * Descriptions: 13. rotll
 * 1. upon success, nothing
 * @line_number: where the lines numb appear
 * @stack: pointe tops of a stacks
 * 2. upon fail, EXIT_FAILURE
 * Returns: see belows
 */
void get_rotl(stack_t **stack, unsigned int line_number)
{
stack_t *first, *last;
(void)line_number;
if ((*stack == NULL) || ((*stack)->next == NULL))
{
;
}
else
{
first = last = *stack;
while (last->next)
{
last = last->next;
}
*stack = first->next;
last->next = first;
first->prev = last;
first->next = NULL;
(*stack)->prev = NULL;
}
}
