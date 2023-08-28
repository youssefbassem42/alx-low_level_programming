#include "lists.h"

/**
 * sum_listint - calculates the summition of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */


int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp_point = head;

	if (head == NULL)
		return (0);
	while (temp_point)
	{
		sum = sum + temp_point->n;
		temp_point = temp_point->next;
	}
	return (sum);
}
