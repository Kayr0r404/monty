#include "monty.h"

container_t container_arr = {NULL, NULL, 0};

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
    printf("here");

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	container_arr.file = fopen(argv[1], "r");
	if (container_arr.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), container_arr.file) != NULL)
	{
		container_arr.opcode = strtok(line, " \t\n");
		if (container_arr.opcode == NULL)
			continue;
		if (strcmp(container_arr.opcode, "push") == 0)
		{
            if (atoi(strtok(NULL, " \t\n")) == 0)
            {
                fprintf(stderr, "L%i: usage: push integer\n", counter);
                exit(EXIT_FAILURE); }
			container_arr.data = atoi(strtok(NULL, " \t\n"));
			_push(&head, counter);
		}
		counter++;
	}
	_print(head, counter);

	fclose(container_arr.file);
	exit(EXIT_SUCCESS);
}
