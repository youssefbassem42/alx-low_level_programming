#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the  linked list
 * @head: pointer to point the first element in the list
 * @n: data to insert in the new element in the linked list
 *
 * Return: pointer to the new node, or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New_list;
	listint_t *temp_point = *head;

	New_list =  malloc(sizeof(listint_t));

	if (!New_list)
		return (NULL);

	New_list->n = n;
	New_list->next = NULL;
	if (*head == NULL)
	{
		*head = New_list;
		return (New_list);
	}
	while (temp_point->next)
	{
		temp_point = temp_point->next;
	}
	temp_point->next = New_list;
	return (New_list);
}
