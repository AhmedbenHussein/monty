#include "monty.h"

/**
 * get_mod - functions the find a modules tops twoo elementts
 * @line_number: where the lines num appeare
 * 1. upon succes, nothing
 * Descriptions: 9. modd
 * 2. upon faill, EXIT_FAILURE
 * @stack: point is tops a stacks
 * Returns: see belows
 */
void get_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n %= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
