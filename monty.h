#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct container_s - global
 * @line: opcode
 * @file: monty file
 * @data: input int
 * @flag: 0 if stack 1 if queue
*/
typedef struct container_s
{
	char *line;
	FILE *file;
	char *data;
	int flag;
} container_t;
extern container_t container;

void _pall(stack_t **h, unsigned int line_number);
void _pint(stack_t **head, unsigned int line_number);
void _push(stack_t **head, unsigned int line_number);
stack_t *push(stack_t **head, int data);
void _addnode(stack_t **head, unsigned int line);
void _addnode_at_the_end(stack_t **head, unsigned int n);
void _pop(stack_t **head, unsigned int line_number);
void _swap(stack_t **head, unsigned int line_number);
void _add(stack_t **head, unsigned int line_number);
void _sub(stack_t **h, unsigned int line_number);
void _mul(stack_t **head, unsigned int line_number);
void _div(stack_t **head, unsigned int line_number);
void _mod(stack_t **head, unsigned int line_number);
void _stack(stack_t **head, unsigned int n);
void _queue(stack_t **head, unsigned int line);

size_t list_len(const stack_t *h);
void _nop(stack_t **head, unsigned int line_number);
int execute(stack_t **stack, unsigned int line_number);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void _pchar(stack_t **head, unsigned int line);
void _pstr(stack_t **head, unsigned int line);
void _rotl(stack_t **head, unsigned int line);
void _rotr(stack_t **head, unsigned int line);
void _loop(stack_t **head, unsigned int n);
void free_stack(stack_t *head);
bool is_number(const char *str);

#endif /*MONTY_H*/
