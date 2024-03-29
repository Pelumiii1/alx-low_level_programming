#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be added
 * return: returns the address to the new element or NULL
 *
 */

list_t *add_node(list_t **head, const char *str)
{
    char *dup;
    int len;
    list_t *new;

    new = malloc(sizeof(list_t));
    if (dup == NULL)
    {
        return (NULL);
    }
    for (len = 0; str[len];)
        len++;

    new->str = dup;
    new->len = len;
    new->next = *head;

    *head = new;
    return (new);
}