#include "lists.h"

void free_listint(listint_t *head);
/**
 * free_listint2 - function that frees list and sets head to NULL
 * @head: is a double pointer
 */

void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	free_listint(*head);
	*head = NULL;
}

/**
 * free_listint - function that frees a list
 * @head:: is a pointer
 */

void free_listint(listint_t *head)
{
	if (head)
		free_listint(head->next);
	free(head);
}
