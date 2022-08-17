#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a list
 * @head: the pointer to the first node 
 */

void free_listint(listint_t *head){
    listint_t *tp, *tp2;

    tp = head;
    while (tp != NULL)
    {
        tp2 = tp->next;
        free(tp);
        tp = tp2;
    }
}