#include "main.h"

/**
 * print_square - prints a square
 * @size: as size of square
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int q;
		int r;

		for (q = 0; q < size; q++)
		{
			for (r = 0; r < size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
