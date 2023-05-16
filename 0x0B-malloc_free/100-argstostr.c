#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all program arguments
 *
 * @ac: input value
 * @av: is a double pointer
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int e, f, g, h;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);
	h = ac;
	for (e = 0; e < ac; ++e)
	{
		for (f = 0; av[e][f] != '\0'; f++)
		{
			h++;
		}
	}
	args = malloc(sizeof(char) * 1 + h);
	if (args == NULL)
		return (NULL);
	g = 0;
	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f] != '\0'; f++)
		{
			args[g] = av[e][f];
			g++;
		}
		*(args + g) = '\n';
		g++;
	}
	return (args);
}
