#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @head: input list
 * Return: current node
 */
stack_t *_swap(stack_t **head)
{
    stack_t *curr;
    int tmp;
    if (head == NULL)
        return (NULL);
    curr = *head;
    tmp = curr->n;
    curr->n = curr->next->n;
    curr->next->n = tmp;

    return (*head = curr);
}