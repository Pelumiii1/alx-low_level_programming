#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of the list
 * @head: address of the first node of the list
 * @n: integer to be inserted at the beginning of the list
 *
 * return: address of new node 
 */

listint_t *add_nodeint(listint_t **head, const int n){
    listint_t *tp;
    tp = malloc(sizeof(listint_t));
    if (tp == NULL)
        return (NULL);
        
    tp->n = n;
    tp->next = *head;
    *head = tp;

    return (*head);
}