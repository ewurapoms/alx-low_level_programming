#include "lists.h"

/**
 * dlistint_len - prints num of elements in a linked dlistint_t list
 * @h: is a pointer
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	for ( ; h; h = h->next)
		num++;

	return (num);
}
