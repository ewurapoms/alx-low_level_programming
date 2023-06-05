#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - removes the node
 * @head: is a double pointer
 * @index: …
 *
 * Return: …
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	node = *head;
	while (i < index - 1)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
		i++;
	}
	tmp = node->next;
	node->next = tmp->next;
	free(tmp);
	return (1);
}

