#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: arg count
 * @argv: input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*p)(int, char **) = &main;
	unsigned char cop;
	int m, n = 0;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	m = atoi(argv[1]);


	if (m < 0)
	{
		printf("Error\n");
		exit(2);
	}


	for (; n < m; n++)
	{
		cop = *(unsigned char *)p;
		printf("%.2x", cop);


		if (n == m - 1)
			continue;
		printf(" ");


		p++;
	}


	printf("\n");
	return (0);
}
