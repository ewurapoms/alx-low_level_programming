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
	int x;
	int y;
	char *cop;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	cop = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(cop) == NULL || cop[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*cop == 47 && y == 0) ||
	    (*cop == 37 && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(cop)(x, y));
	return (0);
}
