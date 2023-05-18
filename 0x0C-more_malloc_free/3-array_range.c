#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range -  function that creates an array of integers.
 * @min: minimum input
 * @max: maximum input
 *
 * Return: output
 */
int *array_range(int min, int max)
{
	int *a, m = 0;
	int sum;

	if (min > max)
	{
		return (NULL);
	}

	sum = (max - min) + 1;
	a = malloc(sizeof(int) * sum);

	if (a == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		*(a + m) = min++;
		m++;
	}
	return (a);
}
