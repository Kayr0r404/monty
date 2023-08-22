#include "monty.h"
/**
  * _pop -  removes the top element from the stack
  * @head: input list
  * Return: current node
 */
stack_t *_pop(stack_t **head)
{
	stack_t *curr;

	if (head == NULL)
		return (NULL);
	curr = (*head)->next;
	curr->prev = NULL;
	free(*head);

	return (*head = curr);
}
