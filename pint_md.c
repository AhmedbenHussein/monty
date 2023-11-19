#include "monty.h"

/**
 * get_pint - functions that print top element on the stack
 * @stack: point heads of stacks
 * Descriptions: 1. pints
 * @line_number: where the instruct appeare
 * 1. upon succes, nothing
 * Returns: see belows
 * 2. upon faill, EXIT_FAILURE
 */
void get_pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
