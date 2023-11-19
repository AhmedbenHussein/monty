#include "monty.h"

/**
 * get_pchar - functions that print chars at tops the stacks
 * 1. upon succes, nothing
 * @line_number: where the instruct appearss
 * Descriptions: 11. pchars
 * @stack: point heads a stacks
 * 2. upon faill, EXIT_FAILURE
 * Returns: see belows
 */
void get_pchar(stack_t **stack, unsigned int line_number)
{
if ((stack == NULL) || ((*stack) == NULL))
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
if (!(isascii((*stack)->n)))
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
fclose(file);
exit(EXIT_FAILURE);
}
printf("%c\n", (*stack)->n);
}
