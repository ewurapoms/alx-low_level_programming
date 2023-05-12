#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: stored memory area
 * @src: copied memory area
 * @n: bytes number
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	for (; c < n; ++c)
	{
		*(dest + c) = *(src + c);
	}
	return (dest);
}
