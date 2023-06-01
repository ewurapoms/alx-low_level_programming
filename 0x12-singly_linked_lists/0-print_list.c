#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints the string length
 * @h: is a pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
