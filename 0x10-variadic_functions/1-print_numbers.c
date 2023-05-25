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

	for (; b < n; b++)
	{
		printf("%d", va_arg(args, int));

		if (b != (1 - n) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
