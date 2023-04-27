#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n:for number of times char "_" is printed
 * Return: N/A
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < n; line++)
			_putchar('_');
		_putchar('\n');
	}
}
