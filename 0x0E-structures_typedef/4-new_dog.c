#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * new_dog - function that create new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: pointer to struct,NULL as failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len;
	char *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (len = 0, ptr = name; *ptr; len++)
		ptr++;
	d->name = malloc(len + 1);
	if (d->name == NULL)
		free(d->name);
		free(d);
		return (NULL);
	for (len = 0, ptr = owner; *ptr; len++)
		ptr++;
	d->owner = malloc(len + 1);
	if (d->owner == NULL)
		free(d->owner);
		free(d);
		return (NULL);
	for (len = 0; *name != '\0'; len++, name++)
		d->name[len] = *name;
	d->name[len] = '\0';
	for (len = 0; *owner != '\0'; len++, owner++)
		d->owner[len] = *owner;
	d->owner[len] = '\0';
	d->age = age;
	return (d);
}
