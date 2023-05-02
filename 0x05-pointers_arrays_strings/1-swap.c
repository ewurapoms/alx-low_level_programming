#include "main.h"

/**
 * swap_int - swaps values of two int
 * @a: first int to swap
 * @b: second int to swap
 */

void swap_int(int *a, int *b)
{
	int mix = *a;
	*a = *b;
	*b = mix;
}
