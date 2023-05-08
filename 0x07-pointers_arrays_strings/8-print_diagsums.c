#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: pointer to an int
 * @size: size of an int
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int q;
	int r = 0;
	int s = 0;

	for (q = 0; q < size; q++)
	{
		r = r + a[q * size + q];
	}
	for (q = size - 1; q >= 0; --q)
	{
		s += a[q * size + (size - 1 - q)];
	}
	printf("%d, %d\n", r, s);
}
