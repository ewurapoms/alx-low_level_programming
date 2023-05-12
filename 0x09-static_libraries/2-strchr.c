#include "main.h"
/**
 * _strchr - Entry point
 * @s: is a string
 * @c: is a character
 * Return: NULL where if condition is not met
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (*(s + x) == c)
			return (&s[x]);
	}
	return (0);
}
