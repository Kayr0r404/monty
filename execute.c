#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @line_number: is the line number in the file
* Return: no return
*/
int execute(stack_t **stack, unsigned int line_number)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _print}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op = container.line;

	if (op && op[0] == '#')
		return (0);
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_number);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", 1, op);
		free(container.data);
		exit(EXIT_FAILURE); }
	return (1);
}
