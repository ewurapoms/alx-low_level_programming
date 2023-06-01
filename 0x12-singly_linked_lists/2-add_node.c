#include "lists.h"
#include <string.h>

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
 * add_node - Entry point
 * @head:is a pointer
 * @str:to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tempnode;

	if (head != NULL && str != NULL)
	{
		tempnode = malloc(sizeof(tempnode));
		if (tempnode == NULL)
			return (NULL);

		tempnode->len = _strlen(str);
		tempnode->str = strdup(str);
		tempnode->next = *(head);
		*head = tempnode;

		return (tempnode);
	}
	return (0);
}
