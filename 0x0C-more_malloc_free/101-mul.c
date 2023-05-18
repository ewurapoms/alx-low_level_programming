#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two positive numbers
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: output
 */
int main(int argc, char *argv[])
{
	unsigned long product;
	int y;
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (y = 1; y < argc; ++y)
	{
		for (z = 0; argv[y][z] != '\0'; z++)
		{
			if (argv[y][z] > '9' || argv[y][z] < '0')/** assume ascii values for int used here **/
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	product = atol(argv[1]) * atol(argv[2]);
	
	printf("%lu\n", product);
	
	return (0);
}
