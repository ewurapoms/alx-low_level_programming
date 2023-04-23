#include <stdio.h>

/**
 * main - Entry point
 * Description:playing with base 10 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0;

	while (b <= 9)
	{
		putchar(b + 48);
		if (b != 9)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}
