#include "lists.h"

/**
* reverse_listint - reverse linked list
* @head: pointer to first node in list
*
* Return: pointer to first node in the new list
*/


listint_t *reverse_listint(listint_t **head)
{
	listint_t *Next = NULL;
	listint_t *Preve = NULL;

	while (*head)
	{
		Next = (*head)->next;
		(*head)->next = Preve;
		Preve = (*head);
		(*head) = Next;
	}
	(*head) = Preve;
	return (*head);
}
