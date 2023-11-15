#ifndef MONTY
#define MONTY
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO project
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * struct instruction_s - opcode and it functions
 */

typedef struct global_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * for stack, queues, LIFO, FIFO Holberton project
 * @n: integer
 * @prev: points to the previous element of the queue
 * @next: points to the next element of the queue
 *
 * struct stack_s - doubly linked list representation of a stack
 * Description: doubly linked list node structure
 */

typedef struct stack_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_num);
} instruction_t;
void pint(stack_t **stack, unsigned int line_num);
void free_stack(stack_t *head);
int pushint(char *list, int ln);
int _strcmp(char *opcode, char *list);
void add(stack_t **stack, unsigned int line_num);
void swap(stack_t **stack, unsigned int line_num);
void pop(stack_t **stack, unsigned int line_num);
void push(stack_t **stack, unsigned int line_number, int n);
void pall(stack_t **stack, unsigned int line_num);
void execute(char *string[], stack_t *stack);
int nlfind(char *list);
void free_list(char *a[]);
int combfind(char *list, int ln);
#endif
