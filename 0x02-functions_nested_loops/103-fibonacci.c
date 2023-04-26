#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 0;
	long int q = 1;
	long int r = 2;
	long int s = r;

	while (r + q < 4000000)
	{
		r += q;
		if (r % 2 == 0)
			s += r;
		q = r - q;
		p++;
	}
	printf("%ld\n", s);
	return (0);
}
