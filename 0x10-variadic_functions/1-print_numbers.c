#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 * @separator: the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b = 0;
	va_list args;

	va_start(args, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(args, int));

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
