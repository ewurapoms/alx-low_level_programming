#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry point
 * @haystack: pointer to a char
 * @needle: char pointer
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)

{
	int y;
	char *a = haystack;
	char *b = needle;

	if (*b == 0)
		return (haystack);
	while (*a)
	{
		y = 0;
		if (*(haystack + y) == needle[y])
		{
			do {
				if (needle[1 + y] == '\0')
					return (haystack);
				++y;
			} while (*(haystack + y) == *(needle + y));
		}
		haystack++;
	}
	return (NULL);
}
