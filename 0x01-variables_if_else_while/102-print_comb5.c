#include <stdio.h>

/**
 * main - Entry point
 * Description: display all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pos1;
	int pos2;

	for (pos1 = 0; pos1  < 100; pos1++)
	{
		for (pos2 = 0; pos2 < 100; pos2++)
		{
			if (pos1 < pos2)
			{
				putchar((pos1 / 10) + 48);
				putchar((pos1 % 10) + 48);
				putchar(' ');
				putchar((pos2 / 10) + 48);
				putchar((pos2 % 10) + 48);
				if (pos1 != 98 || pos2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
