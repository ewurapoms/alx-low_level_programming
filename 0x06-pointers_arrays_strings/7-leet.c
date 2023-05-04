#include "main.h"

/**
 * leet - encodes a string into 1337
 * @so: string to encode
 * Return: value of t
 */

char *leet(char *so)
{
	int doo = 0;
	int re = 0;
	char mi[] = "aAeEoOtTlL";
	char fa[] = "4433007711";

	for (doo = 0; so[doo] != '\0'; doo++)
	{
		for (re = 0; re < 10; re++)
		{
			if (*(doo + so) == *(re + mi))
			{
				*(so + doo) = *(fa + re);
			}
		}
	}
	return (so);
}
