#include <stdio.h>

/**
 * main - Entry point
 * Description: display all but letters q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 97;

	while
		(a <= 122)
		{
			if (a == 101 || a == 113)
				a++;
			continue;
			putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}
