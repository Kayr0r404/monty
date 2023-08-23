#include "monty.h"
/**
 * _print - Write a function that prints all the
 * elements of a  stack_t list.
 * @h: input double linked list
 * Return: the number of nodes
*/
void _print(const  stack_t *h, unsigned int line_number)
{
	if  (h == NULL)
	{
		fprintf(stderr, "L%i: can't pall, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
