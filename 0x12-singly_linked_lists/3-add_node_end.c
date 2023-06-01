#include "lists.h"

/**
 * _strlen - prints string length
 * @s: the string to print
 * Return: strlen
 */

int _strlen(const char *s)
{
	int string = 0;

	while (*s)
	{
		s++;
		string++;
	}
	return (string);
}

/**
 * add_node_end - function that adds a new node
 * @head: double pointer
 * @str: is a string pointer
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added;
	list_t *tempnode;

	if (str != NULL)
	{
		added = malloc(sizeof(list_t));
		if (added == NULL)
			return (NULL);
		added->str = strdup(str);
		added->len = _strlen(str);
		added->next = NULL;

		if (*head == NULL)
		{
			*head = added;
			return (*head);
		}
		else
		{
			tempnode = *head;

			while (tempnode->next)
				tempnode = tempnode->next;
			tempnode->next = added;
			return (tempnode);
		}
	}
	return (NULL);
}

