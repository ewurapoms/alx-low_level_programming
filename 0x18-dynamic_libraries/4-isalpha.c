#include "main.h"

/**
 * _isalpha - considers alphabetic characters
 * @c: represents characters in ascii
 * Return: 1 if c is prints letters,else display 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
