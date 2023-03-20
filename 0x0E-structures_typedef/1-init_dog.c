#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialises the struct parameters
 * @d: struct
 * @name: pointer to name
 * @age: age
 * @owner: pointer to ownwe
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Error: Null pointer passed to init_dog\n");
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
