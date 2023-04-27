#include "main.h"

/**
 * print_triangle - outputs a triangle
 * @size: triangle size
 * Return: 0
 */

void print_triangle(int size)
{
	int top;
	int down;

	if (size <= 0)
	_putchar('\n');
	else
	{
	for (top = 1; top <= size; top++)
	{
	for (down = 1; down <= size; down++)
	{
	if ((top + down) <= size)
	_putchar(32);
	else
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
