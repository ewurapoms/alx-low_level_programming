#include "main.h"

/**
 * find_prime - tests for prime numbers
 * @x: input value
 * @y: outcome of x
 * Return: 1 if num is prime
 */

int find_prime(int x, int y)
{
	if (y < x)
	{
		if (x % y == 0)
		{
			return (0);
		}
		else
		{
			return (find_prime(x, 1 + y));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - checks if num is prime
 * @n: input value
 * Return: 1 if prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, 2));
	}
}
