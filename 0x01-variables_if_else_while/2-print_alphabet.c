#include <stdio.h>

/**
 * main - Entry point
 * Description: Outputs lowercase alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 97;

	while
		(n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
