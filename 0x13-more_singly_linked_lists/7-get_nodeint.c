#include "lists.h"

/**
 * get_nodeint_at_index - return the node at nth index in a linked list
 * @head: first node in linked list
 * @index: index of the node that returned
 *
 * Return: pointer to the node we're looking for, or NULL
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *temp_point;
    unsigned int counter = 0 ;
    temp_point = head;
    while (index != counter)
    {
        temp_point = temp_point->next;
        counter++ ;
    }
    
    return ((temp_point)? temp_point : NULL);
}