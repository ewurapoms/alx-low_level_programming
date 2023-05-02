#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n eelements of an array of integers
 * @a: first int pointer
 * @n: second int pointer
 */
void print_array(int *a, int n)
{
	int pa = 0;

	for (pa = 0; pa < n; pa++)
	{
		printf("%d", a[pa]);
	if (pa < n - 1)
	printf(",");
	}
	printf("\n");
}
