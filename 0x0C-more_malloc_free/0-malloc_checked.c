#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  function that allocates memory.
 * @b: input value
 * Return: final results
 */

void *malloc_checked(unsigned int b)
{
	void *d = malloc(b);

	if (d == NULL)
	{
		exit(98);
	}
	return (d);
}
