#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @head: input list
 * @line_number: kj
 * Return: sum if success else 0
 */
void _add(stack_t **head, unsigned int line_number)
{

	if (!head || list_len(*head) < 2)
	{
		fprintf(stderr, "L%i: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	
	(*head)->next->n = (*head)->n + (*head)->next->n;
	free(head);
	*head = (*head)->next;
}
