#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: is a function pointer
 *
 * Return: N/A
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
