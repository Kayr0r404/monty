#include "monty.h"
/**
 * _pint - print the value of the elemnt at the top of the stack
 * @head: input list
 * @line_number: line number on monty file
*/
void _pint(stack_t **head, unsigned int line_number)
{
	if (head == NULL)
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*head)->n);
}
