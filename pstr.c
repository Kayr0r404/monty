#include "monty.h"
/**
 * _pstr - prints the car at the top of the stack
 * @head: input stack
 * @line: monty
*/
void _pstr(stack_t **head, unsigned int line)
{
	stack_t *curr;

	if (head == NULL || !(*head))
	{
		fprintf(stderr, "\n");
		return;
	}

	curr = *head;
	while (curr != NULL)
	{
		int i = curr->n;

		if (i <= 0 || i > 127)
		{
			printf("\n");
			return;
		}

		printf("%c", curr->n);
		curr = curr->next;
	}

	(void)line;
}
