#include "monty.h"

/**
 * _sub - adds the top two elements of the stack.
 * @head: input list
 * @line_number: line number on monty file
 *
 */
void _sub(stack_t **head, unsigned int line_number)
{

	stack_t *h;

	h = *head;
	for (; h; )
		h = h->next;

	if (list_len(*head) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		clean_up(head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	h->next->n = h->n - h->next->n;
	*head = h->next;
	free(h);
}
