#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @head: input list
 * Return: current node
 */
void _swap(stack_t **head, unsigned int line_number)
{
    stack_t *curr;
    int tmp;

    if (head == NULL)
        exit(EXIT_FAILURE);
    if (list_len(*head) < 2)
    {
        printf("L%i: can't swap, stack too short", line_number);
        exit(EXIT_FAILURE);
    }

    curr = *head;
    tmp = curr->n;
    curr->n = curr->next->n;
    curr->next->n = tmp;
    (*head) = curr;
    free(curr);
}