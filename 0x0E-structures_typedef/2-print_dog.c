#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - function that prints struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL || d->name == NULL)
	{
		printf("(nil)");
	}
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
