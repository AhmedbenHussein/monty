#include "monty.h"

/**
 * get_div - functions this divide a tops elementt the stacks
 * 1. upon success, nothing
 * @line_number: where the lines num appear
 * Descriptions: 7. divv
 * @stack: point the top a stacks
 * 2. upon fail, EXIT_FAILURE
 * Returns: see belows
 */
void get_div(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(file);
		free(*stack);
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
		second->n /= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
