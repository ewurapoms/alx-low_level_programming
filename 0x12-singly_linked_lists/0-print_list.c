#include "lists.h"
#include <stdio.h>
#include <stdlib>

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: is a pointer
 *
 * Return: list
 */

size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		element++;
		h = h->next;
	}

	return (element);
}
