#include "monty.h"
/**
  * _pop -  removes the top element from the stack
  * @head: input list
  * @line_number: line number on monty file
 */
void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *curr;

	if (*head == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	curr = (*head)->next;
	curr->prev = NULL;
	free(*head);
	*head = curr;
}
