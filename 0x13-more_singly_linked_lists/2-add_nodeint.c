#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of a linked list
 * @head: point to the first node in the list
 * @n: data to insert it  in that new node
 * Return: pointer to the new node, or NULL if fails
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *New;
    
    New =(int*) malloc(sizeof(listint_t));
    if(New == NULL)
        return (NULL);
    New->n = n;
    New->next = *head;
    *head = New;

    return (New);
}