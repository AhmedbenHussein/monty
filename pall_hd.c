#include "monty.h"

/**
 * get_pall - functions that print all elements a stacks
 * @stack: point a head this stacks
 * @line_number: where a instruct appear
 * Descriptions: 0. push, pal
 * Returns: see belows
 * 1. upon succes, nothing
 * 2. upon faill, EXIT_FAILURE
 */
void get_pall(stack_t **stack, unsigned int line_number)
{
stack_t *current;
(void)line_number;
current = *stack;
while (current != NULL)
{
printf("%d", current->n);
current = current->next;
printf("\n");
}
}
