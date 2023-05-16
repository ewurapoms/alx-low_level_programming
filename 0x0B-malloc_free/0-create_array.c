#include "main.h"
#include <stdlib.h>

/**
 * create_array - Prints an array of string
 * @size: input value
 * @c:input value
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *s;

	s = malloc(size * sizeof(char));
	if (s == NULL || size == 0)
		return (NULL);
	for (; a < size; a++)
	{
		*(s + a) = c;
	}
	return (s);
}
