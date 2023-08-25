#include "monty.h"
/**
  * _pop -  removes the top element from the stack
  * @head: input list
  * @line_number: line number on monty file
 */
void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *h;

	if (*head == NULL || !head)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(container.file);
		exit(EXIT_FAILURE);
	}

	h = *head;
	*head = h->next;
	free(h);
}
