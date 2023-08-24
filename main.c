#include "monty.h"
container_t container = {NULL, NULL, NULL};
/**
 * main - main event
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char line[1024];
	stack_t *head = NULL;
	unsigned int counter = 1;

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
		container.data = strtok(NULL, " \n\t");
		/*execute(char *content, stack_t **stack, unsigned int counter, FILE *file)*/
		execute(&head, counter);
		counter++;
	}
	fclose(container.file);
	free(container.line);
	free(container.data);
	(void)head;
	return (0);
}
