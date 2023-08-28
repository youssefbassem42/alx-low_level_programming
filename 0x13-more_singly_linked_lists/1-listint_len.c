#include "lists.h"

/**
 * listint_len - return the number of elements in the linked lists
 * @p: linked list of type listint_t to traverse
 *
 * Return: the number of nodes in the list
 */

size_t listint_len(const listint_t *p)
{
    size_t numberOfNodes = 0;
    while(p)
    {
        numberOfNodes++;
        p = p->next;
    }
    return (numberOfNodes);
}