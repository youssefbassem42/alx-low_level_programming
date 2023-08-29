#include "lists.h"

/**
 * free_listint2 - frees the  linked list from elements
 * @head: pointer to point the listint_t list to be free
 */


void free_listint2(listint_t **head)
{
	listint_t *temp_point;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp_point = (*head)->next;
		free(*head);
		*head = temp_point;
	}
	*head = NULL;
}
