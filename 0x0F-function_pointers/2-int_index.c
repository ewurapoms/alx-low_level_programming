#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: is the array of int
 * @size: array size
 * @cmp: is the function pointer
 *
 * Return:  index of the first element for cmp function or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
