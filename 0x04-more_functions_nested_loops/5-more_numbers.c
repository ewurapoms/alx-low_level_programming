#include "main.h"

/**
 * more_numbers - Prints numbers 0-14, 10x
 * Return: correct output of numbers
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_putchar((b / 10) + 48);
	}
	_putchar((b % 10) + 48);
	}
	_putchar('\n');
	}
}
