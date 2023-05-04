#include "main.h"

/**
 * string_toupper - changes string from lowercase to uppercase
 * @str: string pointer
 * Return: str
 */
char *string_toupper(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
			*(str + n) = *(str + n) - 32;
		++n;
	}
	return (str);
}
