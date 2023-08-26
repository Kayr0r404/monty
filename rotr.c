#include "monty.h"
/**
 * _rotr - rotates the stack to the bottom
 * The last element of the stack becomes the top element
 * @head: input stack
 * @line: monty line
 *
*/
void _rotr(stack_t **head, unsigned int line)
{
	stack_t *curr;
	int n;

	if (head == NULL || !(*head))
		return;

	curr = *head;
	for (; curr->next; curr = curr->next)
		;
	n = curr->n;

	while (curr->prev)
	{
		curr->n = curr->prev->n;
		curr = curr->prev;
	}
	curr->n = n;
	(void)line;
}
