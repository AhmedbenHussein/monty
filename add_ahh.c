#include "monty.h"

/**
 * get_add - functions this add a top twoo elementts a stacks
 * Descriptions: 4. adds
 * @stack: point the tops a stacks
 * 1. upon succes, nothing
 * @line_number: where the lines num appeare
 * 2. upon faill, EXIT_FAILURE
 * Returns: see belows
 */
void get_add(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n += first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
