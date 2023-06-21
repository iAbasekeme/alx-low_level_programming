#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function to free all dog properties
 * @d: A pointer to the dog struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
    if (d)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}