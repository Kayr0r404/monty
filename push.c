#include "monty.h"
/**
 * add_dnodeint - Write a function that adds a new node
 * at the beginning of a  stack_t list.
 * @head: input doubly monty
 * @data: value to be added
 * Prototype:  stack_t *add_dnodeint( stack_t **head, const int n)
 * Return: the address of the new element, or NULL if it failed
*/
 stack_t *_push(stack_t **head, int data)
{
	/* Create a new node*/
	 stack_t *new_node = ( stack_t *)malloc(sizeof( stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return (NULL);
	}

	/* Initialize the new node*/
	new_node->n = data;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Update the previous node of the current head if it exists*/
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head to point to the new node*/
	*head = new_node;

	return (new_node);
}
