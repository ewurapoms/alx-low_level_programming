#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked list
 * @h: is a pointer
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = (*h).next;
		nodes++;
	}
	return (nodes);
}
