#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @head: input list
 * Return: sum if success else 0
 */
int _add(stack_t *head)
{
    if (!head)
        return (NULL);
    
    if (list_len(head) < 2)
    {
        printf("L<line_number>: can't swap, stack too short");
        return (NULL);
    }
    return (head->n + head->next->n);
}