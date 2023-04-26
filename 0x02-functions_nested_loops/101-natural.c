#include <stdio.h>

/**
 * main - Displays all natural numbers < 1024 which are 3 or 5 multiples
 * Return: Always 0.
 */
int main(void)
{
	int n, m = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			m += n;
	}

	printf("%d\n", m);

	return (0);
}
