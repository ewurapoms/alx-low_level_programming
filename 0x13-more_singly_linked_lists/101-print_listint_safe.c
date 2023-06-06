#include "lists.h"

/**
 * print_listint_safe - prints all the values of a listint_t list
 * @head: is a pointer
 *
 * Return: output.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t show = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		show++;
		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (show);
}
