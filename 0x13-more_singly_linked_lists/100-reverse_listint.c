#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: is a pointer
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *front = NULL, *back = *head;

	while (*head != NULL)
	{
		*head = (*head)->next;
		(*back).next = front;
		front = back;
		back = *head;
	}
	*head = front;
	return (*head);
}
