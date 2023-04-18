#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - function that prints struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	printf("Name: %s\n", d->name);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	printf("Owner: %s\n", d->owner);
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	printf("Age: %f\n", d->age);
	if (d == NULL)
	{
		return;
	}
}
