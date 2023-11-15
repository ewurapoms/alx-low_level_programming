#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of intergers
 * @list: pointer to the head of the skip
 * @value: value to search for
 * Return: pointer to the first node
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *skipper;

	if (list == NULL)
		return (NULL);

	for (node = skipper = list; skipper->next != NULL && skipper->n < value;)
	{
		node = skipper;
		if (skipper->express != NULL)
		{
			skipper = skipper->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   skipper->index, skipper->n);
		}
		else
		{
			while (skipper->next != NULL)
				skipper = skipper->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, skipper->index);

	for (; node->index < skipper->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
