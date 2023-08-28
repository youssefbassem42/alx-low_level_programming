#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *New_Node;
    unsigned int i;
    listint_t *temp_point = (*head);
    New_Node = malloc(sizeof(listint_t));
    if(New_Node == NULL || *head == NULL)
        return (NULL);
    New_Node->n = n;
    New_Node->next = NULL;
    if(idx == 0)
    {    
        New_Node->next = *head;
        *head = New_Node;
    
    }
    for( i = 0; i < idx ; i++)
    {
        if(i == (idx-1))
        {
            New_Node->next = temp_point->next;
            temp_point->next = New_Node;
            return (New_Node);
        }
        else
         temp_point = temp_point->next;
    }

    return (NULL);
}