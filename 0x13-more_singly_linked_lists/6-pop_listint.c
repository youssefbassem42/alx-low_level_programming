#include "lists.h"

/**
* pop_listint - delete head node of the linked list
* @head: pointer to point the first element in the linked list
*
* Return:  data inside the elements that was deleted,
* or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp_point;
	int number;

	if (head == NULL || *head == NULL)
		return (0);
	number = (*head)->n;
	temp_point = (*head)->next;
	free(*head);
	*head = temp_point;
	return (number);
}
