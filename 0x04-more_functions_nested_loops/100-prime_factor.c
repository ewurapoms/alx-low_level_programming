#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of largest number
 * Return: 0
 */

int main(void)
{
	unsigned long int ln = 612852475143;
	unsigned long int pf = 612852475143;

	for (ln = 3; ln < 782849; ln = ln + 2)
	{
		/* where 782849 was derived as square root of 612852475143 */
		while ((pf % ln == 0) && (pf != ln))
			pf = pf / ln;
	}
	printf("%lu", pf);
	printf("\n");
	return (0);
}
