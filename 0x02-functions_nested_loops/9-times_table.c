#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers that starts from n to 98
 *
 * @n: start point of numbers
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	printf("\n");
}
