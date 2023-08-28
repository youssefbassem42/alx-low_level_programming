#include "lists.h"

/**
 * free_listint_safe - free linked list
 * @p: pointer to tpe first node in tpe linked list
 *
 * Return: number of element in the frees list
 */
size_t free_listint_safe(listint_t **p)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!p || !*p)
		return (0);

	while (*p)
	{
		diff = *p - (*p)->next;
		if (diff > 0)
		{
			temp = (*p)->next;
			free(*p);
			*p = temp;
			len++;
		}
		else
		{
			free(*p);
			*p = NULL;
			len++;
			break;
		}
	}

	*p = NULL;

	return (len);
}
