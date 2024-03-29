#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* _strlen - Returns the length of a string
* @s: length of string to be printed.
*
* Return: string length
*/
int _strlen(char *s)
{
int c = 0;

for (; *s != '\0'; s++)
{
c++;
}
return (c);
}

/**
* *_strncpy - a function that copies a string.
* @dest: destination value
* @src: source value
*
* Return: pointer to string dest
*/
char *_strncpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

/**
* new_dog - a function that creates a new dog.
* @name: name of new dog
* @age: age of new dog
* @owner: wner of new dog
*
* Return: pointer to new dog (success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);

dog = (dog_t *)malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = (char *)malloc((len1 + 1) * sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
_strncpy(dog->name, name);

dog->owner = (char *)malloc((len2 + 1) * sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
_strncpy(dog->owner, owner);

dog->age = age;
return (dog);
}
