#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to the string
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar (s[x]);
	}
	_putchar('\n');
}
