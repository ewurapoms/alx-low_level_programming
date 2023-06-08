#include "main.h"

/**
 * get_endianness - function that checks the endiannes
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *get;
	unsigned int a = 1;

	get = (char *) &a;
	return ((int)*get);
}
