#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid_copy - frees a 2 dimensional grid
 * @grid: input value
 * @height: input value
 * Return: N/A
 */

void free_grid_copy(char **grid, int height)
{
	int b = 0;

	for (; b < height; ++b)
	{
		free(*(grid + b));
	}
	free(grid);
}

/**
 * strtow - splits a string into words.
 * @str: is a string pointer
 *
 * Return: output if success or NULL (error)
 */
char **strtow(char *str)
{
	char **new;
	unsigned int m, n, o, p, q;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (m = n = 0; str[m] != '\0'; m++)
		if (str[m] != 32 && (str[m + 1] == 32 || str[m + 1] == '\0'))
			n++;
	new = malloc((n + 1) * sizeof(char *));
	if (new == NULL || n == 0)
	{
		free(new);
		return (NULL);
	}
	for (o = q = 0; o < n; o++)
	{
		for (m = q; str[m] != '\0'; m++)
		{
			if (str[m] == 32)
				q++;
			if (str[m] != 32 && (str[m + 1] == 32 || str[m + 1] == '\0'))
				/** 32 is the ascii value used in place of a space **/
			{
				*(new + o) = malloc((m - q + 2) * sizeof(char));
				if (*(new + o) == NULL)
				{
					free_grid_copy(new, o);
					return (NULL);
				}
				break;
			}
		}
		for (p = 0; q <= m; q++, p++)
			new[o][p] = str[q];
		new[o][p] = '\0';
	}
	*(new + o) = NULL;
	return (new);
}
