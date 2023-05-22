#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 * @name: is a pointer to a char
 * @age: is a pointer to a float
 * @owner: is another pointer to a char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
