#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: N/A
 */

void print_all(const char * const format, ...)
{
	char *str;
	char *separator = "";
	va_list args;
	unsigned int d = 0;

	va_start(args, format);

	while (format && format[d])
	{
		switch (format[d])
		{
			case 'c':/** c is a character argument **/
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':/** i is the integer arg **/
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':/** f is a double float arg **/
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':/** s represents the string arg **/
				str = va_arg(args, char *);
				str = (str == NULL) ? "(nil)" : str;
				printf("%s%s", separator, str);
				break;
			default:
				d++;
				continue;
		}

		separator = ", ";
		d++;
	}

	va_end(args);

	printf("\n");
}
