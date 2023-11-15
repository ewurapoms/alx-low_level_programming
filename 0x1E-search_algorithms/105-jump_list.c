#include "search_algos.h"

/**
 * jump_list - Searches for a value in an array of
 *             integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search
 * Return: pointer to the first node where the value is located, or NULL if
 * the value is not found or if the list is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, steps;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	i = 0;
	steps = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (i = i + steps; jump->index < i; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
