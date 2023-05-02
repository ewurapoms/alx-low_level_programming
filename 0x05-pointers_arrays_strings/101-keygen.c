#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0
 */

int main(void)
{
	int x, y, z = 0;
	int pw[100];

	srand(time(NULL));

	for (; x < 100; ++x)
	{
		pw[x] = rand() % 78;
		y += (pw[x] + 48);
		putchar(pw[x] + 48);
		if ((2772 - y) - 48 < 78)
		{
			z = 2772 - y - 48;
			y += z;
				putchar(z + 48);
			break;
		}
	}
	return (0);
}
