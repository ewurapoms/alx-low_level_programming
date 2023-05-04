#include "main.h"
#include <string.h>

/**
 * cap_string - print the string in caps
 * @caps: string to be capitalised
 * Return: pointer to new string
 */

char *cap_string(char *caps)
{
	int p = 0;

	while (*(caps + p))
	{
		while (!(caps[p] >= 97 && caps[p] <= 122))
			++p;
		if (caps[p - 1] == 32 ||
		caps[p - 1] == 9 ||
		caps[p - 1] == 10 ||
		caps[p - 1] == 44 ||
		caps[p - 1] == 59 ||
		caps[p - 1] == 46 ||
		caps[p - 1] == 33 ||
		caps[p - 1] == 63 ||
		caps[p - 1] == 34 ||
		caps[p - 1] == 40 ||
		caps[p - 1] == 41 ||
		caps[p - 1] == 123 ||
		caps[p - 1] == 125 ||/** assume ascii values from line 13 **/
		p == 0)
			caps[p] -= 32;
		p++;
	}
	return (caps);
}
