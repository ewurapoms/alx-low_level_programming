#include "main.h"

/**
 * jack_bauer - outputs every minute of Jack Bauer's day from 00:00 to 23:59
 * Return: N/A
 */
void jack_bauer(void)
{
	int m, n, o, p;

	for (m = 0; m <= 2; m++)
	for (n = 0; n <= 9; n++)
	for (o = 0; o <= 5; o++)
	for (p = 0; p <= 9; p++)
	{
		if (m >= 2 && n >= 4)
			break;
		_putchar(m + 48);
		_putchar(n + 48);
		_putchar(':');
		_putchar(o + 48);
		_putchar(p + 48);
		_putchar('\n');
	}
}
