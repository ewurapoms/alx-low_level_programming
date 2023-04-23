#include <stdio.h>

/**
 * main - Entry point
 * Description: output base 10 number with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0;

	while
		(b <= 9)
		{
			putchar(b + '0');
			b++;
		}
	putchar('\n');
	return (0);
}
