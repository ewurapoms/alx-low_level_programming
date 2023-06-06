#include "lists.h"

/**
 * free_listint_safe - Entry point
 * @h: is a pointer
 *
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node = NULL;
	size_t p = 0;

	if (h == NULL || *h == NULL)
		return (0);
	node = *h;

	do {
		p++;
		node = (*h)->next;
		free(*h);
		if (node >= *h)
		{
			*h = NULL;
			return (p);
		}
		*h = node;
	} while (node != NULL);

	return (p);
}
