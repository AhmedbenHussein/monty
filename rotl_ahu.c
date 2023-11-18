#include "monty.h"

/**
 * get_rotl - functions that rotate the taill to the tops
 * 1. upon success, nothing
 * @stack: pointer to the top of the stack
 * 2. upon fail, EXIT_FAILURE
 * Descriptions: 13. rotll
 * @line_number: where the line numb appearr
 * Return: see belows
 */
void get_rotl(stack_t **stack, unsigned int line_number)
{
stack_t *first, *last;
if ((*stack == NULL) || ((*stack)->next == NULL))
(void)line_number;
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
