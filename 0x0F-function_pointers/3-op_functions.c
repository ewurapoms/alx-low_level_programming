#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first int to add to b
 * @b: next int to add to a
 *
 * Return: sum of a, b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: int 1
 * @b: int 2
 *
 * Return: difference of a, b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: int 1
 * @b: int 2
 *
 * Return: mul of a, b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: first int
 * @b: 2nd int
 *
 * Return: division of a, b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: int 1
 * @b: int 2
 *
 * Return: remainder of a, b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
