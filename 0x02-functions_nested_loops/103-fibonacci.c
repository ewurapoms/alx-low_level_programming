#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 0;
	unsigned long int q, r, s = r;

	while (r + q < 4000000)
	{
		r += q;
		if (r % 2 == 0)
			s += r;
		q = r - q;
		p++;
	}
	printf("%lu\n", s);
	return (0);
}
