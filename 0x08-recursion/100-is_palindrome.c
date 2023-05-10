#include "main.h"

/**
 * strempty - displays the string
 * @s: the string to print
 * Return: value of s
 */

int strempty(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strempty(1 + s));
	}
}

/**
 * answer - prints results of the string
 * @s: the string to print
 * @a: input value
 * @b: input value
 * Return: palindrome output
 */

int answer(char *s, int a, int b)
{
	if (s[a] == s[b])
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + answer(s, 1 + a, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - displays the string
 * @s: the string to print
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (answer(s, 0, strempty(s) - 1));
}
