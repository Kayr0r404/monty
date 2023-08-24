#include "monty.h"
/**
 * add_dnodeint_end - a function that adds
 * a new node at the end of a  stack_t list.
 * @head: input doubly list
 * @n: input data
 * Prototype:  stack_t *add_dnodeint_end( stack_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
*/
 void _push_end(stack_t **head, const int n)
{
	 stack_t *curr, *new_node;

	new_node = ( stack_t *)malloc(sizeof( stack_t));
	if (new_node == NULL)
		exit(EXIT_FAILURE);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;

		curr->next = new_node;
		new_node->prev = curr;
	}
}
