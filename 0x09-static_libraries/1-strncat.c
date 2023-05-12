#include "main.h"

/**
 * _strncat - cat two strings
 * @dest: string destination
 * @src: string source
 * @n: int value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int q = 0;
	int r = 0;

	while (dest[q++])
	{
		r++;
	}
	for (q = 0; src[q] && q < n; ++q)
	{
		dest[r++] = src[q];
	}
	return (dest);
}
