#include "monty.h"

/**
 *  get_rotr - Rotative a rights
 *  @line_number: Lines num
 *  @stack: Stacks
 *
 *  Returns: Voidd
 */
void get_rotr(stack_t **stack, unsigned int line_number)
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
last->prev->next = NULL;
last->prev = NULL;
last->next = first;
first->prev = last;
*stack = last;
}
}
