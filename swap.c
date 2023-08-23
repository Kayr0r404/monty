#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @head: input list
 * Return: current node
 */
stack_t *_swap(stack_t **head, unsigned int line_number)
{
    stack_t *curr;
    int tmp;
    if (head == NULL)
        return (NULL);
    if (list_len(*head) < 2)
    {
        printf("L%i: can't swap, stack too short", line_number);
        return (NULL);
    }

    curr = *head;
    tmp = curr->n;
    curr->n = curr->next->n;
    curr->next->n = tmp;

    return (*head = curr);
}