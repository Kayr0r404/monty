#include "monty.h"

/**
 * _push - calls a function according to flag number
 * at the beginning of a  stack_t list.
 * @head: input doubly monty
 * @line_number: line number on monty file
*/
void _push(stack_t **head, unsigned int line_number)
{
	if (container.flag == 0)
		_addnode(head, line_number);
	else
		_addnode_at_the_end(head, line_number);
}
