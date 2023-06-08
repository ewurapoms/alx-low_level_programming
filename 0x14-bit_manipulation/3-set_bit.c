#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: is a pointer
 * @index: begins at 0 of bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitset;

	if (index > 63)
		return (-1);

	bitset = 1 << index;
	*n = (*n | bitset);
	return (1);
}
