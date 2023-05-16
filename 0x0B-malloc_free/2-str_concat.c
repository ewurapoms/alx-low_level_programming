#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to cat
 * @s2: another string to cat
 *
 * Return:  pointer to a new string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *new;

	while (s1 && s1[c])
		c++;
	while (s2 && s2[d])
		d++;
	new = malloc(sizeof(char) * (1 + c + d));
	if (new == NULL)
		return (NULL);
	a = 0;
	b = 0;
	if (s1)
	{
		while (a < c)
		{
			*(new + a) = *(s1 + a);
			a++;
		}
	}
	if (s2)
	{
		while (a < (c + d))
		{
			*(new + a) = *(s2 + b);
			++a;
			++b;
		}
	}
	new[a] = '\0';
	return (new);
}
