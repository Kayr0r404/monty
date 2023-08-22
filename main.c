#include "monty.h"

int main()
{
    stack_t *head = NULL;
    _push(&head, 1);
    _push(&head, 2);
    _push(&head, 3);
    _print(head);
    printf("---------------------\n");
    _pop(&head);
    _print(head);
    printf("---------------------\n");
    _pint(head);
    return 0;
}