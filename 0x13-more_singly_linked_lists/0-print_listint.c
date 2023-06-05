#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: is a pointer value
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = (*h).next;
		num++;
	}
	return (num);
}
