#include "lists.h"

/**
 * find_listint_loop - find  loop in the linked list
 * @head: linked list to search for
 *
 * Return: address of  node where the loop start, or NULL if not
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;

	if (!head)
		return (NULL);

	while (s && f && f->next)
	{
		f = (f->next)->next;
		s = s->next;
		if (f == s)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}

	return (NULL);

}
