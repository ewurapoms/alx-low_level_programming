#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(*(argv + 1));
	c = 0;
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= *(cents + b))
		{
			++c;
			a -= cents[b];
		}
	}
	printf("%d\n", c);
	return (0);
}
