#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: is a pointer
 * @old_size: initial memory size
 * @new_size: size memory to print
 *
 * Return: a pointer to reallocated memory and free ptr
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == 0)
			return (NULL);
		free(ptr);
		return (pt);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	pt = malloc(new_size);
	if (pt == 0)
		return (NULL);
	_memcpy(pt, ptr, old_size);
	free(ptr);
	return (pt);
}

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
