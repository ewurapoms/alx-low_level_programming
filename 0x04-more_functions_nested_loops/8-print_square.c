#include "main.h"

/**
 * print_square - print square with char #
 * @size: represents square
 * Return: 0
 */

void print_square(int size)
{
	int q, r;

	for (q = 1; q <= size; q++)
	{
		for (r = 1; r <= size; r++)
			_putchar('#');
		_putchar('\n');
	}
}
