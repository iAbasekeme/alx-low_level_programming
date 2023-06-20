#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function to print properties of a dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)\n");
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)\n");
}
}
