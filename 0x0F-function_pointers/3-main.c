#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fun_ptr = get_op_func(argv[2]);

	if (!fun_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun_ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

