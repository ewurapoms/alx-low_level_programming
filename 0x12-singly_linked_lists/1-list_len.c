#include "lists.h"
#include <stdio.h>

/**
 * list_len - Entry point
 * @h: is a pointer
 *
 * Return: output
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
