#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: is the width of the grid
 * @height: represents the height of grid
 * Return: Null (failed)
*/


int **alloc_grid(int width, int height)
{
	int **m;
	int n = 0;
	int p = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	m = (int **) malloc(height * sizeof(int *));


	if (m == NULL)
		return (NULL);


	for (n = 0; n < height; n++)
	{
		*(m + n) = (int *) malloc(sizeof(int) * width);
		if (m[n] == NULL)
		{
			free(m);
			for (p = 0; p <= n; ++p)
				free(m[p]);
			return (NULL);
		}
	}


	for (n = 0; n < height; n++)
	{
		for (p = 0; p < width; p++)
		{
			m[n][p] = 0;
		}
	}
	return (m);
}
