#include "monty.h"

/**
 * get_pchar - functions that print the chars tops the stacks
 * @stack: point to head of the stacks
 * Descriptions: 11. pchars
 * 1. upon succes, nothing
 * @line_number: where the instruct appear
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

/**
 * get_pint - functions that printt the elementt a stacks
 * 1. upon succes, nothing
 * @line_number: where this instruct appear
 * Description: 1. pints
 * 2. upon faill, EXIT_FAILURE
 * @stack: point to heads the stacks
 * Returns: see belows
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
