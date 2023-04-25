#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int lt;
	int n = 0;

	while (n <= 9)
	{
		for (lt = 97; lt <= 122; lt++)
		{
			_putchar(lt);
		}
		_putchar('\n');
		n++;
	}
}
