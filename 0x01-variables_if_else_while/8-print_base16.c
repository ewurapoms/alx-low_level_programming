#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all  base 16 numbers in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bl;
	/*where bl = base 16 in lowercase*/

	for (bl = 48; bl < 58; bl++)
		putchar(bl);
	/*consider 97 and 103 as ASCII reps of a, and g*/
	for (bl = 97; bl < 103; bl++)
		putchar(bl);
	putchar('\n');
	return (0);
}
