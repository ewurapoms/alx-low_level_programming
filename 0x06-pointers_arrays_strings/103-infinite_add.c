#include "main.h"
#include <stdio.h>
/**
 * infinite_add - this function adds two numbers
 * @r: input value
 * @n1: number 1
 * @n2: number 2
 * @size_r: size of buffer
 * Return: value of r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, ab, cd, ef, gh, xy = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		cd = a;
	else
		cd = b;
	if (size_r <= cd + 1)
		return (0);
	r[cd + 1] = '\0';
	a--, b--, size_r--;
	ef = *(n1 + a) - 48, gh = *(n2 + b) - 48;
	while (cd >= 0)
	{
		ab = ef + gh + xy;
		if (ab >= 10)
			xy = ab / 10;
		else
			xy = 0;
		if (ab > 0)
		*(r + cd) = (ab % 10) + 48;
		else
			*(r + ef) = 48;
		if (a > 0)
			a--, ef = *(n1 + a) - 48;
		else
			ef = 0;
		if (b > 0)
			b--, gh = n2[b] - 48;
		else
			gh = 0;
		cd--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
