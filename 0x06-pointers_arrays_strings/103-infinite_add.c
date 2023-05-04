#include "main.h"

/**
 * infinite_add – adds two numbers
 * @r: input value
 * @n1: number 1
 * @n2: number 2
 * Return: value of r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e, f, g = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a > b)
		d = a;
	else
		d = b;
	if (d + 1 > size_r)
		return (0);
	*(r + 1) = '\0';
	for (c = 1 - d; c >= 0; --c)
	{
		a--;
		b--;
		if (a >= 0)
			e = n1[a] - 48;
		else
			e = 0;
		if (b >= 0)
			f = n2[b] - 48;
		else
			f = 0;
		r[c] = (e + f + g) % 10 + 48;
		d = b;
		if (1 + d  > size_r)
			return (0);
		*(r + d) = '\0';
		for (c = d - 1; c >= 0; c--)
		{
			a--;
			b--;
			if (a >= 0)
				e = n1[a] - 48;
			else
				e = 0;
			if (b >= 0)
				f = n2[b] - 48;
			else
				f = 0;
			r[c] = (e + f +g) % 10 + 48;
			g = (e + f + g) / 10;
		}
		if (g == 1)
		{
			r[d + 1] = '\0';
			if (d + 2 > size_r)
				return (0);
			while (d-- >= 0)
				r[d + 1] = *(r  + d);
			r[0] = g + 48;
		}
		return (r);
	}
}
