#include "monty.h"
/**
 * _push - Write a function that adds a new node
 * at the beginning of a  stack_t list.
 * @head: input doubly monty
 * @line_number: line number on monty file
*/
void _push(stack_t **head, unsigned int line_number)
{
	stack_t *new_node;

	/* Create a new node*/
	new_node = (stack_t *)malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		exit(EXIT_FAILURE);
	}

	/* Initialize the new node*/
	if (container.data == NULL)
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{

		new_node->n = atoi(container.data);

		new_node->prev = NULL;
		new_node->next = *head;

		/* Update the previous node of the current head if it exists*/
		if (*head != NULL)
			(*head)->prev = new_node;

		/* Update the head to point to the new node*/
		*head = new_node;
		(void)line_number;
	}
}
