#include "monty.h"
/**
 * _print - Write a function that prints all the
 * elements of a  stack_t list.
 * @h: input double linked list
 * @line_number: line number on monty file
*/
void _pall(stack_t **h, unsigned int line_number)
{
	stack_t *curr;

	curr = *h;
	if (!h || !*h)
		return;
	while (curr != NULL)
	{
		printf("%i\n", curr->n);
		curr = curr->next;
	}
	(void)line_number;
}
