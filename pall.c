#include "monty.h"
/**
 * _pall - Write a function that prints all the
 * elements of a  stack_t list.
 * @h: input double linked list
 * @line_number: line number on monty file
*/
void _pall(stack_t **h, unsigned int line_number)
{
	if (h == NULL || !(*h))
	{
		fclose(container.file);
		exit(EXIT_FAILURE);
	}

	while (*h != NULL)
	{
		printf("%i\n", (*h)->n);
		*h = (*h)->next;
	}
	(void)line_number;
}
