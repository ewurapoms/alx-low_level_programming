#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: represents the integers
 * Return: Where 1 > 0, 0 = 0 and -1 < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	/* regard decimals 43, 45 and 48 as ascii +, - and 0 */
	}
	_putchar('\n');
}
