#include "monty.h"
/**
 * _push_end - a function that adds
 * a new node at the end of a  stack_t list.
 * @head: input doubly list
 * @n: input data
 * Prototype:  stack_t *add_dnodeint_end( stack_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
*/
void _push_end(stack_t **head, const int n)
{
	stack_t *curr, *new_node;

	new_node = (stack_t *)malloc(sizeof(stack_t));
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

/**
* free_stack - frees a list
* @head: head pointer
*/
void free_stack(stack_t *head)
{
	stack_t *current = head;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}

/**
* add_at_head - adds node at the beginning of the list
* @head: head pointer
* @data: new data
*/
void add_at_head(stack_t **head, const int data)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = data;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
}

/**
* add_at_tail - add note at the end of the list
* @head: head pointer
* @data: new data
*/
void add_at_tail(stack_t **head, const int data)
{
	stack_t *h, *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = data;
	new_node->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = *head;
}

/**
* clean_up - close file, free memory and EXIT_FAILURE
* @head: head pointer
*/
void clean_up(stack_t **head)
{
	free_stack(*head);
	free(container.line);
	fclose(container.file);
	exit(EXIT_FAILURE);
}

