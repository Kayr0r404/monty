#include "monty.h"
/**
 * _push - Write a function that adds a new node
 * at the beginning of a  stack_t list.
 * @head: input doubly monty
 * @line_number: line number on monty file
*/
#include "monty.h"

void _push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (container.data)
	{
		if (container.data[0] == '-')
			j++;
		for (; container.data[j] != '\0'; j++)
		{
			if (container.data[j] > 57 || container.data[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(container.file);
			free(container.line);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(container.file);
		free(container.line);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(container.data);
	
		addnode(head, n);
}

/**
 * is_number - checks if input is a number
 * @str: input string
 * Return: true if str is a number, otherwise false
*/
bool is_number(const char *str)
{
	int i = 0;
	bool has_digits = false;

	if (str == NULL || *str == '\0')
		return (false);  /* Empty or NULL string is not a number*/

	/* Skip optional sign*/
	if (str[i] == '+' || str[i] == '-')
		i++;

	/* Check for digits before the decimal point*/
	while (isdigit(str[i]))
	{
		has_digits = true;
		i++;
	}

	/* Check for optional decimal point and digits after it*/
	if (str[i] == '.')
	{
		i++;
		while (isdigit(str[i]))
		{
			has_digits = true;
			i++;
		}
	}

	/*Check for optional exponent*/
	if (has_digits && (str[i] == 'e' || str[i] == 'E'))
	{
		i++;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (isdigit(str[i]))
			i++;
	}

	/* Return true only if we reached the end of str n encountered digits*/
	return (str[i] == '\0' && has_digits);
}
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;

}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}