#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @head: input list
 * @line_number: line number on monty file
 */
void _swap(stack_t **head, unsigned int line_number)
{
	stack_t *curr;
	int tmp;

	if (head == NULL || !(*head) || list_len(*head) < 2)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", line_number);
		fclose(container.file);
		exit(EXIT_FAILURE);
	}

	curr = *head;
	tmp = curr->n;
	curr->n = curr->next->n;
	curr->next->n = tmp;
	*head = curr;
}
