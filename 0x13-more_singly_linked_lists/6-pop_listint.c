#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: is a double pointer
 * Return: head node date or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = (*temp).n;
	free(temp);
	return (n);
}
