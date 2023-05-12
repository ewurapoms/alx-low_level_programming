#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: 1st string to compare
 * @s2: 2nd string to compare
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	for (; s1[comp] != '\0' || s2[comp] != '\0'; comp++)
	{
		if (*(s1 + comp) != *(s2 + comp))
		{
			return (s1[comp] - s2[comp]);
		}
	}
	return (0);
}
