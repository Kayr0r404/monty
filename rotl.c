#include "monty.h"
/**
 * _rotl - rotates the stack to the top
 * The top element of the stack becomes the last one.
 * and the second top element becomes the first top
 * @head: input stack
 * @line: monty line
 *
*/
void _rotl(stack_t **head, unsigned int line)
{
	stack_t *curr;
	int n;

	if (head == NULL || !(*head))
		return;

	n = (*head)->n;
	curr = *head;

	while (curr->next)
	{
		curr->n = curr->next->n;
		curr = curr->next;
	}

	curr->n = n;
	(void)line;
}
