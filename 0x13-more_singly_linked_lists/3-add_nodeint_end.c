#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: input
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tempnode = NULL;
	listint_t *new = NULL;

	tempnode = malloc(sizeof(listint_t));
	if (tempnode)
	{
		tempnode->n = n;
		tempnode->next = NULL;
		if (*head)
		{
			new = *head;
			while (new->next)
				new = new->next;
			(*new).next = tempnode;
		}
		else
			*head = tempnode;
	}
	return (tempnode);
}
