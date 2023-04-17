#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - function to initialize structure
 * @d: structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
