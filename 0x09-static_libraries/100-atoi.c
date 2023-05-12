#include "main.h"

/**
 * _atoi - changes a string to an int
 * @s: the converting pointer
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int m = 0;
	int n = 1;

	do {
		if (*s == '-')
			n *= -1;
		else if (*s >= 48 && *s <= 57)
			m = (m * 10) + (*s - 48);
		else if (m > 0)
			break;
	} while (*s++);
	return (m * n);
}
