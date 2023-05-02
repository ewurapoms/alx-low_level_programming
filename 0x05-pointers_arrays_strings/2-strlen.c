#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: indicates the string to check
 * Return: N/A
 */
int _strlen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	return (size);
}
