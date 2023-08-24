#include "monty.h"
/**
 * _nop - this function does nothing
 * @head: input stack
 * @line_number: is the line number in the file
*/
void _nop(stack_t **head, unsigned int line_number)
{
	if (head == NULL || !(*head))
	{
		fclose(container.file);
		exit(EXIT_FAILURE);
	}
	(void)line_number;
}
