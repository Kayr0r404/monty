#include "monty.h"
/**
 * _pchar - prints the car at the top of the stack
 * @head: input stack
 * @line: monty
*/
void _pchar(stack_t **head, unsigned int line)
{
	if (head == NULL || !(*head))
	{
		fprintf(stderr, "L%i: can't pchar, stack empty\n", line);
		fclose(container.file);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n < 0 || (*head)->n > 127)
	{
		fprintf(stderr, "L%i: can't pchar, value out of range\n", line);
		fclose(container.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%c\n", (*head)->n);
}
