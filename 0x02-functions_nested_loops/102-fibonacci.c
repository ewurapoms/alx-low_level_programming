#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */
int main(void)
{
	int num;
	unsigned long f1 = 0, f2 = 1, g;

	for (num = 0; num < 50; num++)
	{
		g = f1 + f2;
		printf("%lu", g);

		f1 = f2;
		f2 = g;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
