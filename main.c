#include "monty.h"
container_t container = {NULL, NULL, 1};
/**
 * main - main event
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char line[1024], *tmp;
	stack_t *head = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	container.file = fopen(argv[1], "r");
	if (container.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), container.file) != NULL)
	{
		container.line = strtok(line, " \n\t");
		tmp = strtok(NULL, " \n\t");

		if (tmp != NULL)
		{
			container.data = atoi(tmp);
		}
		/*execute(char *content, stack_t **stack, unsigned int counter, FILE *file)*/
		execute(&head);
	}

	fclose(container.file);
	exit(EXIT_SUCCESS);
	(void)tmp;
	(void)head;
}
