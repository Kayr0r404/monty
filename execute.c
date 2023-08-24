#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* Return: no return
*/
int execute(stack_t **stack)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _print}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{NULL, NULL}
				};
	unsigned int i = 0, counter = 1;
	char *op = container.line;

	if (op && op[0] == '#')
		return (0);
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++, counter++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		free(container.line);
		exit(EXIT_FAILURE); }
	return (1);
}
