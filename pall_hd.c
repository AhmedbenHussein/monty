#include "monty.h"

/**
 * get_pall - functions that print all elements a stacks
 * 1. upon succes, nothing
 * @stack: point a head this stacks
 * Descriptions: 0. push, pal
 * @line_number: where a instruct appear
 * 2. upon faill, EXIT_FAILURE
 * Returns: see belows
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
