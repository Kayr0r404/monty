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

	if (is_number(container.data))
	{
		/* Create a new node*/
		new_node = (stack_t *)malloc(sizeof(stack_t));

		if (new_node == NULL)
		{
			fprintf(stderr, "Memory allocation failed!\n");
			fclose(container.file);
			exit(EXIT_FAILURE);
		}

		/* Initialize the new node*/
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
	else
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_number);
		fclose(container.file);
		exit(EXIT_FAILURE);
	}
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

