#include "main.h"

/**
 * _strcpy - to copy the string
 * @dest: point to char destination
 * @src: pointer to char source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int c = 0;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c++] = '\0';
	return (dest);
}
