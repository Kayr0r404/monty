#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @head: input list
 * @line_number: line number on monty file
 *
 */
void _add(stack_t **head, unsigned int line_number)
{

	stack_t *h;

	h = *head;
	for (; h; )
		h = h->next;

	if (list_len(*head) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		clean_up(head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	h->next->n = h->n + h->next->n;
	*head = h->next;
	free(h);
}
/**
 * _sub - subtract the top two elements of the stack.
 * @head: input list
 * @line_number: line number on monty file
 *
 */
void _sub(stack_t **head, unsigned int line_number)
{

	stack_t *h;

	h = *head;
	for (; h; )
		h = h->next;

	if (list_len(*head) < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		clean_up(head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	h->next->n = h->n - h->next->n;
	*head = h->next;
	free(h);
}

/**
 * _div - divide the top elemt with the botom elements of the stack.
 * @head: input list
 * @line_number: line number on monty file
 *
 */
void _div(stack_t **head, unsigned int line_number)
{

	stack_t *h;

	h = *head;
	for (; h; )
		h = h->next;

	if (list_len(*head) < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		clean_up(head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		clean_up(head);
		exit(EXIT_FAILURE);
	}
	h->next->n = h->n / h->next->n;
	*head = h->next;
	free(h);
}

/**
 * _mul - multiples the top two elements of the stack.
 * @head: input list
 * @line_number: line number on monty file
 *
 */
void _mul(stack_t **head, unsigned int line_number)
{

	stack_t *h;

	h = *head;
	for (; h; )
		h = h->next;

	if (list_len(*head) < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		clean_up(head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	h->next->n = h->n * h->next->n;
	*head = h->next;
	free(h);
}

/**
 * _mod - divide the top with the bottom element of the stack.
 * @head: input list
 * @line_number: line number on monty file
 *
 */
void _mod(stack_t **head, unsigned int line_number)
{

	stack_t *h;

	h = *head;
	for (; h; )
		h = h->next;

	if (list_len(*head) < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		clean_up(head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		clean_up(head);
		exit(EXIT_FAILURE);
	}
	h->next->n = h->n % h->next->n;
	*head = h->next;
	free(h);
}

