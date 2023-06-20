#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing a dog properties
 * @d: pointer to struct Dog to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: ownwer of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
