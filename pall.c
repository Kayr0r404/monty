#include "monty.h"
/**
 * print_dlistint - Write a function that prints all the
 * elements of a  stack_t list.
 * @h: input double linked list
 * Return: the number of nodes
*/
size_t _print(const  stack_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next, j++;
	}
	return (j);
}
