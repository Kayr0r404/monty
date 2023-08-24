#include "monty.h"
/**
 * _print - Write a function that prints all the
 * elements of a  stack_t list.
 * @h: input double linked list
 * @line_number: line number on monty file
*/
void _print(stack_t **h, unsigned int line_number)
{
	stack_t *curr;

	if  (h == NULL)
	{
		fprintf(stderr, "L%i: can't pall, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	curr = *h;
	while (curr != NULL)
	{
		printf("%i\n", curr->n);
		curr = curr->next;
	}
}
