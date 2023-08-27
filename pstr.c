#include "monty.h"
/**
 * _pstr - prints the car at the top of the stack
 * @head: input stack
 * @line: monty
*/
void _pstr(stack_t **head, unsigned int line)
{
	stack_t *h;
	(void)line;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
