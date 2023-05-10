#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to a char
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(1 + s);
		_putchar(*s);
	}
}
