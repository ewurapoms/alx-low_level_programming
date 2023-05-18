#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: is a pointer
 * Return: output
 */

int main(int argc, char *argv[])
{
	unsigned long prod;
	int y = 1, z = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (y = 1; y < argc; y++)
	{
		for (z = 0; argv[y][z] != '\0'; z++)
		{
			if (argv[y][z] < '0' || argv[y][z] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	prod = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", prod);
	return (0);
}
