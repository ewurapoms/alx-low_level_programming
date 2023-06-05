#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: is a double pointer
 * @idx: index
 * @n: input value
 *
 * Return: …
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int add = 0;
	listint_t *tempnode;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tempnode = *head;
		while (add < idx - 1 && tempnode != NULL)
		{
			tempnode = tempnode->next;
			add++;
		}
		if (tempnode == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tempnode->next;
	tempnode->next = new;
	return (new);
}
