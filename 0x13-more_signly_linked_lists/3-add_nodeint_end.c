#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - to add a node at the end of the list
 * @head: the address of the first node of the list
 * @n: integer to be inserted at the end of the list
 * 
 * Return: address of the new node 
 */

listint_t *add_nodeint_end(listint_t **head, const int n){
   listint_t *temp, *temp2;

    temp = malloc(sizeof(listint_t));
    if(temp == NULL)
        return (NULL);

    temp->n = n;
    temp->next = NULL;

    if(*head == NULL){
        *head = temp;
        return (temp);

    }
    temp2 = *head;
    while (temp2->next)
        temp2 = temp2->next;
    temp2->next = temp;
    return (temp);
}