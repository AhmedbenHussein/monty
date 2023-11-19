#include "monty.h"

/**
 * get_pop - functions this pop is tops elementt a stacks
 * Descriptions: 2. pops
 * @line_number: where as lines num appear
 * 1. upon succes, nothing
 * @stack: point at the tops off stacks
 * Returns: see belows
 * 2. upon faill, EXIT_FAILURE
 */
void get_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *first;

	if ((*stack == NULL) || (stack == NULL))
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
