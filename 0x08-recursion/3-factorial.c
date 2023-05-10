#include "main.h"

/**
 * factorial - returns a given number's factorial
 * @n: represents 0 if lower and -1 as an error
 *
 * Return: value of n
 */

int factorial(int n)
{
	if (n < 0)
		return (- 1);
	if (n <= 1 || n < 2)
		return (1);
	return (n * factorial(n - 1));
}
