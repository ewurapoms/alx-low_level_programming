#include "main.h"

/**
 * _abs - derives the absolute value of an integer
 * @n: displays the integer
 * Return: prints the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
