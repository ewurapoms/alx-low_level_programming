#include "main.h"

/**
 * print_diagonal - displays diagonal line on terminal
 * @n: occurrence for diagonal lines
 * Return: N/A
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
