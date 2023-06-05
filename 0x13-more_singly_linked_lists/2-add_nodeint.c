#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: is a pointer
 * @n: is another pointer
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tempnode;

	tempnode = malloc(sizeof(listint_t));
	if (tempnode == NULL || head == NULL)
		return (NULL);
	{
		tempnode->n = n;
		tempnode->next = *head;
		*head = tempnode;
	}
	return (*head);
}
