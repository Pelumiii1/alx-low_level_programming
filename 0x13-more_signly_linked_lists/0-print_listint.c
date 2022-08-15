#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all element of a singly linked lists
 * @h: pointer to the list 
 * 
 * Return - the number of nodes
 * 
 */

size_t print_listint(const listint_t *h){
    const listint_t *tp;
    unsigned int cntr = 0;

    tp = h;
    while (tp)
    {
        printf("%d\n", tp->n);
        cntr++;
        tp = tp->next;
    }

    return (cntr);
}