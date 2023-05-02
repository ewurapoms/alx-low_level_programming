#include "main.h"
/**
 * rev_string - prints reverse of string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char new;

	while (s[b++])
		a++;
	for (b = a - 1; b >= a / 2; b--)
	{
		new = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = new;
	}
}
