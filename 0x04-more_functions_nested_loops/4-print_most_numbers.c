#include "main.h"

/**
 * print_most_numbers - displays numbers 0-9 but excludes 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int pmn;

	for (pmn = 0; pmn <= 9; pmn++)
	{
		if (pmn == 2 || pmn == 4)
			continue;
	{
		_putchar(pmn + '0');
	}
	}
	_putchar('\n');
}
