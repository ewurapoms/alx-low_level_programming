#include "main.h"
/**
 * puts2 - prints every other character of a string from the first character
 * @str: string to print's pointer
 */

void puts2(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
		p++;
	}
	_putchar('\n');
}
