#include "main.h"

/**
 * _memset - Entry point
 * @s: pointer to a char
 * @b: pointer to a char
 * @n: the unsigned int
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int y;

	for (y = 0; n > 0; y++)
	{
		*(s + y) = b;
		--n;
	}
	return (s);
}
