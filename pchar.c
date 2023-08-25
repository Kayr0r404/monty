#include "monty.h"
/**
 * _pchar - prints the car at the top of the stack
 * @head: input stack
 * @line: monty
*/
void _pchar(stack_t **head, unsigned int line)
{
	stack_t *curr;

	if (head == NULL || !(*head))
	{
		fprintf(stderr, "L%i: can't pchar, stack empty\n", line);
		fclose(container.file);
		exit(EXIT_FAILURE);
	}

	curr = *head;
	while (curr != NULL)
	{
		int i = curr->n;

		if ((i < 65 || i > 90) && (i < 97 || i > 122))
		{
			fprintf(stderr, "L%i: can't pchar, value out of range\n", line);
			fclose(container.file);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		fprintf(stdout, "%c\n", i);
		curr = curr->next;
	}
}
