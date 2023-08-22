#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @head: input list
 * Return: sum if success else 0
 */
int _add(stack_t *head)
{
    return (head->n + head->next->n);
}