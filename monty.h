#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>



/**
 * struct stack_s - doublee links listts representive a stacks
 * @prev: points previous element a stacks
 * Descriptions: doubles linkk list node struction
 * @n: int
 * @next: pointer nextt element is stacks
 * for stack, queues, LIFO, FIFO Holberate projects
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and function
 * @opcode: the opcode
 * @f: function to handlle the opcodes
 * Descriptions: opcodes and function
 * for stack, queues, LIFO, FIFO Holberton projects
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
extern FILE *file;
FILE *file;
void (*operator_function)(stack_t **, unsigned int);
void (*go(char *op_f, unsigned int l, stack_t **s))(stack_t**, unsigned int);
void get_push(stack_t **stack, unsigned int line_number, char *temp);
void get_pall(stack_t **stack, unsigned int line_number);
void get_pint(stack_t **stack, unsigned int line_number);
void get_pop(stack_t **stack, unsigned int line_number);
void get_swap(stack_t **stack, unsigned int line_number);
void get_add(stack_t **stack, unsigned int line_number);
void get_nop(stack_t **stack, unsigned int line_number);
void get_sub(stack_t **stack, unsigned int line_number);
void get_div(stack_t **stack, unsigned int line_number);
void get_mul(stack_t **stack, unsigned int line_number);
void get_mod(stack_t **stack, unsigned int line_number);
void get_rotl(stack_t **stack, unsigned int line_number);
void get_pchar(stack_t **stack, unsigned int line_number);
void get_rotr(stack_t **stack, unsigned int line_number);
void get_pstr(stack_t **stack, unsigned int line_number);
void get_free(stack_t *stack);
int _isdigit(char *str);

#endif /* MONTY_H */
