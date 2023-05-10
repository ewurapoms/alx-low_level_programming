#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: pointer to a string
 *
 * Return: value of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}		
