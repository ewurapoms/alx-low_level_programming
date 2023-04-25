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

	n = 1;

	while (n <= 10)
	{
		lt = 'a';
		while (lt <= 'z')
		{
			_putchar(lt);
			lt++;
		}
		_putchar('\n');
		lt++;
	}
}
