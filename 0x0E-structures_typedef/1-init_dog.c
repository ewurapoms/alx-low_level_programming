#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: is a pointer
 * @name: input value
 * @age: input
 * @owner: input
 *
 * Return: 0 (success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
