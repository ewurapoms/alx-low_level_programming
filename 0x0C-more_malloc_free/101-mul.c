#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - Entry point
 * @s: is a string
 *
 * Return: 0 (Sucess), otherwise 1
 */
int is_digit(char *s)
{
	int z = 0;

	while (*(s + z))
	{
		if (s[z] < 48 || s[z] > 57)
			return (0);
		z++;
	}
	return (1);
}

/**
 * _strlen - prints the length of a string
 * @s: is a string
 *
 * Return:output
 */
int _strlen(char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}

/**
 * print_error - checks for errors
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - prints program that multiplies two positive numbers
 * @argc: argument count
 * @argv: is a pointer
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str, *string;
	int a, b, c, z, d, m, n, *sum, q = 0;

	str = argv[1], string = argv[2];
	if (argc != 3 || !is_digit(str) || !is_digit(string))
		print_error();
	a = _strlen(str), b = _strlen(string), c = a + b + 1;
	sum = malloc(sizeof(int) * c);
	if (!sum)
		return (1);
	for (z = 0; z <= a + b; z++)
		sum[z] = 0;
	for (a = a - 1; a >= 0; a--)
	{
		m = str[a] - 48;
		d = 0;
		for (b = _strlen(string) - 1; b >= 0; b--)
		{
			n = string[b] - 48;
			d += sum[a + b + 1] + (m * n);
			sum[a + b + 1] = d % 10;
			d /= 10;
		}
		if (d > 0)
			sum[a + b + 1] += d;
	}
	for (z = 0; z < c - 1; z++)
	{
		if (sum[z])
			q = 1;
		if (q)
			_putchar(sum[z] + 48);
	}
	if (!q)
		_putchar(48);
	_putchar('\n');
	free(sum);
	return (0);
}
