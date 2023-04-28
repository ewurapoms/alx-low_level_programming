#include "main.h"

/**
 * print_diagonal - displays diagonal line on terminal
 * @n: occurrence for diagonal lines
 * Return: N/A
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
					_putchar(92);
				else if (b < a)
					_putchar(32);
				/* assume ascii for decimals 92 and 32 */
			}
			_putchar('\n');
		}
	}
}
