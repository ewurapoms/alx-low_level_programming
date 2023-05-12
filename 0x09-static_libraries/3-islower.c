#include "main.h"

/**
 * _islower - displays lowercase alphabet or otherwise based on return value
 * @c: the representation of char in ascii
 * Return: 1 if char is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 97  && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
