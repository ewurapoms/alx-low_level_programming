#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: pointer value
 * Return: Pointer to duplicated string (success) or Null
 */

char *_strdup(char *str)
{
	int y = 0;
	int z = 1;
	char *thread;

	if (str == NULL)
		return (NULL);
	while (str[z])
	{
		z++;
	}
	thread = malloc((sizeof(char) * z) + 1);
	if (thread == NULL)
	return (NULL);
	while (y < z)
	{
		*(thread + y) = *(str + y);
		y++;
	}
	thread[y] = '\0';
	return (thread);
}
