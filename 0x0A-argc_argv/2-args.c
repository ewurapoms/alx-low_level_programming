#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: is argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a = 0;

	for (; a < argc; ++a)
	{
		printf("%s\n", *(argv + a));
	}
	return (0);
}

