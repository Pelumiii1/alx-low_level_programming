#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list
 * @head: pointer to the head of the list
 * @str: string to br added to the list
 * 
 * Return: NULL in case of failure
 * or address of the element
 * 
 */

list_t *add_node_end(list_t **head, const char *str){
    char *dup;
    int len;
    list_t *new, *last;

    new = malloc(sizeof(list_t));
    if(str == NULL)
        return (NULL);

    dup = strdup(str);
    if (str == NULL){
        free(new);
        return (NULL);
    }
    for (len = 0; str[len];)
        len++;
    new->str = dup;
    new->len = len;
    new->next = NULL;
    if(*head == NULL)
        *head = new;
        else {
            last = *head;
            while (last->next != NULL)
                last = last->next;
            last->next = new;
        }
        return (*head);
}