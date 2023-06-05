#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: is a pointer
 * @index: index of the node, starting at 0
 * Return: Null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = 0;

	for (; nodes < index && head; nodes++)
		head = (*head).next;
	return (head);
}
