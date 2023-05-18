#include "main.h"
#include <stdlib.h>
/**
* _calloc -  function that allocates memory for an array
* @nmemb: is an input value
* @size: is an input value
* Return: the output
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	d = malloc(b);

	if (d == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		*(a + d) = 0;
	}
	return (d);
}
