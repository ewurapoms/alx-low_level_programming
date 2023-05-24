#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: input
 * @size: array size
 * @action: is a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t arr = 0;

	if (array != NULL && action != NULL && size >= 1)

		while (arr < size)
		{
			action(array[arr]);
			arr++;
		}
}
