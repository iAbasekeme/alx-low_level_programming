#include "main.h"
#include <stdlib.h>

/**
 * init_dog - initializes a dog structure
 * @name: name of dog
 * @d: dog structure
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	};
};
