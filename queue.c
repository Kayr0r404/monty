#include "monty.h"
/**
 * _queue - changes the flack to 1
 * so that we can add at the end of the list
 * @head: input stack
 * @line: monty line
*/
void _queue(stack_t **head, unsigned int line)
{
	container.flag = 1;
	(void)head;
	(void)line;
}
/**
 * _addnode_at_the_end - a function that adds
 * a new node at the end of a  stack_t list.
 * @head: input doubly list
 * @n: input data
 * Prototype:  stack_t *add_dnodeint_end( stack_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
*/
void _addnode_at_the_end(stack_t **head, unsigned int n)
{
	stack_t *curr, *new_node;

	if (is_number(container.data))
	{

		new_node = (stack_t *)malloc(sizeof(stack_t));
		if (new_node == NULL)
		{
			fprintf(stderr, "Memory allocation failed!\n");
			fclose(container.file);
			exit(EXIT_FAILURE);
		}

		new_node->n = atoi(container.data);
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
	else
	{
		fprintf(stderr, "L%i: usage: push integer\n", n);
		fclose(container.file);
		exit(EXIT_FAILURE);
	}
}

/**
  * free_stack - a function that frees a dlistint_t list
  * @head: input list
 */
void free_stack(stack_t *head)
{
	stack_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

