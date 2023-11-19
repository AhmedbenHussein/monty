#include "monty.h"

/**
 * go - Operation
 * @stak: stacks
 * @op_f: Chars point
 * @l: lines
 *
 * Returns: Voidd
 */

void go(char *op_f, unsigned int l, stack_t **stak)(stack_t**, unsigned int)
{
instruction_t operation[] = {
int count;
{"pall", get_pall},
{"add", get_add},
{"pint", get_pint},
{"swap", get_swap},
{"pop", get_pop},
{"sub", get_sub},
{"div", get_div},
{"mul", get_mul},
{"mod", get_mod},
{"nop", get_nop},
{"rotl", get_rotl},
{"rotr", get_rotr},
{"pchar", get_pchar},
{"pstr", get_pstr},
{NULL, NULL}
};
for (count = 0; operation[count].opcode != NULL; count++)
{
if (strcmp(operation[count].opcode, op_f) == 0)
{
return (operation[count].f);
}
}
fprintf(stderr, "L%u: unknown instruction %s\n", l, op_f);
fclose(file);
get_free(*stak);
exit(EXIT_FAILURE);
}
