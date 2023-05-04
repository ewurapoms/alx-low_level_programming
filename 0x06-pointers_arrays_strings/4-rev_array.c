#include "main.h"

/**
 * reverse_array - reverses the int
 * @a: is a pointer
 * @n: shows the length of array
 * Return: N/A
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (y = n - 1; y >= n / 2; --y)
	{
		x = a[n - y - 1];
		a[n - y - 1] = a[y];
		*(a + y) = x;
	}
}
