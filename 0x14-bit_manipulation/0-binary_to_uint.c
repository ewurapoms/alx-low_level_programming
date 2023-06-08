#include "main.h"

/**
 *  binary_to_uint - function that converts a binary number to an unsigned int
 *  @b: is a pointer to str 0,1
 *  Return: converted num
 */

unsigned int binary_to_uint(const char *b)
{
	int a, converts = 0;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != 48 && b[a] != 49)
			return (0);
		converts = (converts * 2) + (b[a] - 48);
	}
	return (converts);
}
