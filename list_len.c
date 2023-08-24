#include "monty.h"
/**
 * list_len - a function that returns the number
 * of elements in a linked dlistint_t list
 * @h: input doulbly list
 * Return: number of entries in a list
 */
size_t list_len(const stack_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
