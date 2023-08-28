#include "lists.h"
/**
 * print_listint - Print all elements in linked list 
 * @p: linked list of type listint_t to print it 
 * 
 * Return: the number of nodes 
*/
size_t print_listint(const listint_t *p)
{
    size_t numberOfNodes = 0;
    while(p != NULL)
    {
        printf("%d\n",p->n);
        numberOfNodes++;
        p = p->next;
    } 
    return (numberOfNodes);
}