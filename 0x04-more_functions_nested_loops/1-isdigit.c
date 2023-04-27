#include "main.h"

/**
 * _isdigit - indicates whether digit ranges from 0-9
 * @c: value to check
 * Return: 1 where digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
