#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char lt;
	int n;

	for (n = 0; lt <= 10; n++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
