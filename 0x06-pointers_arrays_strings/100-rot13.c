#include "main.h"
/**
 * rot13 - encodes a string with rot13
 * r: string to input
 * Return: value of r
 */

char *rot13(char *r)
{
	int x = 0;
	char lower[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char upper[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *go = r;

	while (*r)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*r == lower[x])
			{
				*r = upper[x];
				break;
			}
		}
		++r;
	}
	return (go);
}
