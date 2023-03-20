#include "dog.h"

/**
 * init_dog - initialises the struct parameters
 * @d: struct
 * @name: pointer to name
 * @age: age
 * @owner: pointer to ownwe
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
