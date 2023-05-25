#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Entry point
 * @n: input
 * @...: ...
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a = 0;
	va_list args;
	int plus = 0;


	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		plus += va_arg(args, int);
	}
	va_end(args);
	return (plus);
}
