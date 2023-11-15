#include "search_algos.h"

int search_recursively(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - searches a value in a sorted array of intergers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 else, value
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (search_recursively(array, 0, size - 1, value));
}

/**
 * search_recursively - performs recursive binary search
 * @array: pointer to the first element
 * @right: starting index
 * @left: ending index
 * @value: value to search for
 * Return: -1, or index where value is located
 */

int search_recursively(int *array, size_t left, size_t right, int value)
{
	size_t val;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (val = left; val < right; val++)
		printf("%d, ", array[val]);
	printf("%d\n", array[val]);

	val = left + (right - left) / 2;
	if (array[val] == value && (val == left || array[val - 1] != value))
		return (val);
	if (array[val] >= value)
		return (search_recursively(array, left, val, value));
	return (search_recursively(array, val + 1, right, value));
}
