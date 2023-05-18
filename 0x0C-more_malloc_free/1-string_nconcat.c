#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: pointer value
 * @s2: another pointer value
 * @n: input
 * Return: N/A
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f = 0;
	unsigned int q, r;
	char *cat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + f))
		f++;
	cat = malloc(sizeof(*cat) * f + n + 1);
	if (cat == NULL)
		return (NULL);

	for (q = 0, r = 0; q < (f + n); q++)
	{
		if (q < f)
		{
			*(cat + q) = *(s1 + q);
		}
		else
		{
			cat[q] = s2[r];
			r++;
		}
	}
	cat[q] = '\0';
	return (cat);
}
