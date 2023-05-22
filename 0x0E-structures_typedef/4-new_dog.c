#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: *woof
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int d, o, g;
	dog_t *woof;


	if (name == NULL || owner == NULL)
		return (NULL);
	woof = malloc(sizeof(dog_t));
	if (woof == NULL)
		return (NULL);
	for (d = 0; name[d]; d++)
		;
	d++;
	woof->name = malloc(sizeof(char) * d);
	if (woof->name == NULL)
	{
		free(woof);
		return (NULL);
	}
	for (g = 0; g < d; g++)
		woof->name[g] = *(name + g);
	(*woof).age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	woof->owner = malloc(o * sizeof(char));
	if (woof->owner == NULL)
	{
		free(woof->name);
		free(woof);
		return (NULL);
	}
	for (g = 0; g < o; g++)
		woof->owner[g] = owner[g];
	return (woof);
}
