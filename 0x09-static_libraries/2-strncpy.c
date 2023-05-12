#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination of char *
 * @src: source of char *
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (s < n && src[s] != '\0')
	{
		*(dest + s) = *(src + s);
		++s;
	}
	while (s != n)
		dest[s++] = '\0';
	return (dest);
}
