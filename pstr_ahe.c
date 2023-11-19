#include "monty.h"

/**
 * get_pstr - functions this print asci value is elementt
 * @stack: point a heads a stacks
 * 1. upon succes, nothing
 * 2. upon faill, EXIT_FAILURE
 * Descriptions: 12. pstrs
 * @line_number: where the instruct appearss
 * Returns: see belows
 */

void get_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	(void)line_number;

	if ((stack == NULL) || (*stack == NULL))
	{
		printf("\n");
	}
	else
	{
		while (top_node != NULL)
		{
			if ((top_node->n > 0) && (isascii(top_node->n)))
			{
				printf("%c", top_node->n);
				top_node = top_node->next;
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
}
