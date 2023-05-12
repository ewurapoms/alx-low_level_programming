#include "main.h"
#include <stdio.h>

/**
 * main - prints program number of arguments
 * @argc: argument count
 * @argv: is argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;/* argv was unused */
	printf(“%d\n”, argc - 1);

	return (0);
}
