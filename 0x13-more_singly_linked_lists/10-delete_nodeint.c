#include "lists.h"
/**
 * delete_nodeint_at_index - delete node in the linked list at a certain index
 * @head: pointer to first element in list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fails)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_point = *head;
	listint_t *marker = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_point);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp_point || !(temp_point->next))
			return (-1);
		temp_point = temp_point->next;
		i++;
	}
	marker = temp_point->next;
	temp_point->next = marker->next;
	free(marker);

	return (1);

}
