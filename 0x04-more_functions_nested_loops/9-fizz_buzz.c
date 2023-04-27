#include <stdio.h>
#include "main.h"

/**
 * main - prints Fizz Buzz sequence
 *
 * Return: 0
 */
int main(void)
{
	int p;

	for (p = 1; p <= 100; p++)
	{
		if (p % 3 == 0 && !(p % 5 == 0))
			printf("Fizz");
		else if (p % 5 == 0 && !(p % 3 == 0))
			printf("Buzz");
		else if (p % 3 == 0 && p % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", p);
		if (p != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
