#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: the value to check for
 * Return: 1 for upper, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		/* read 'c' values as ascii char A and Z */
	{
		return (1);
	}
	else
		return (0);
}
