#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input value
 * Return: natural sqrt if true, -1 otherwise
 */

int _sqrt_recursion(int n)

{
	return (find_sqrt(n, 1));
}

int find_sqrt(int n, int m);
/**
 * find_sqrt - looks for the square root of a number
 * @n: calculates the natural sqrt
 * @m: integer to iterate
 * Return: natural sqrt if true, -1 otherwise
 */

int find_sqrt(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return  (m);
	return (find_sqrt(n, 1 + m));
}
