#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;/* argc was unused */
	printf("%s\n", *(argv + 0));
	return (0);
}
