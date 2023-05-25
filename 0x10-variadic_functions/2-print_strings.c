#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings – Entry point
 * @separator: the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c = 0;
	va_list args;
	char *str;

	if (n >= 1)
	{
		va_start(args, n);
		while (c < n)
		{ str = va_arg(args, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);
			if (c != n - 1 && separator != NULL)
				printf("%s", separator);
			c++;
		}
		va_end(args);
	}
	printf("\n");
}
