#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: outputs printed numbers
 */

void print_numbers(void)
{
	int print;

	for (print = 0; print <= 9; print++)
	{
		_putchar(print + 48);
		/* print applies ascii decimals */
	}
		_putchar('\n');
}
