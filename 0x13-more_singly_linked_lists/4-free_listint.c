#include "lists.h"

/**
 * free_listint - frees a linked list from the heap
 * @head: listint_t the linked list to be freed
 *
 */

void free_listint(listint_t *head)
{
    listint_t *temp_point;
    while(head != NULL)
    {
        temp_point = head->next;
        free(head);
        head = temp_point;
    }
}