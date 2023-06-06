#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: is a pointer
 *
 * Return: address of node start or NULL if no node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head, *b = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (a != NULL && b != NULL && b->next != NULL)
	{
		a = a->next->next;
		b = b->next;

		if (b == a)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
