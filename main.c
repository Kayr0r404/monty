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
    _pop(&head);
    _print(head);
    printf("---------------------\n");
    _pint(head);
    printf("---------------------\n");
    _swap(&head);
    _print(head);
    printf("---------------------\n");
    printf("sum %d\n", _add(head));
    return 0;
}