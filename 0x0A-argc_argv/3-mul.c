#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int mul = 0;

	if (argc <= 3)
	{
		x = atoi(*(argv + 1));
		mul = atoi(argv[2]);
		printf("%d\n", mul * x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
