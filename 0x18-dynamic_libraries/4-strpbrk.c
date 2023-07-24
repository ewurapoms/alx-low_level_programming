#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - main entry
 * @s: input value
 * @accept: input value
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)

{
	int n = 0;

	while (*s)
	{
		for (n = 0; *(accept + n); ++n)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}
	return (NULL);
}
