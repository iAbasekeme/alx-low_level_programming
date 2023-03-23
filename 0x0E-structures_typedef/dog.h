#ifndef DOG_H
#define DOG_H

/**
 * struct dog - an attribute of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 *
 * Description: attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
