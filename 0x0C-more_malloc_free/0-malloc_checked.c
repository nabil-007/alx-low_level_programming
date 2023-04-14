#include"main.h"
#include<stdlib.h>
/**
 *malloc_checked - function that allocates memory
 *@b: size * length
 *
 * Return: pointer to the allocated memomy
 */
void *malloc_checked(unsigned int b)
{
	void *al_mem;

	al_mem = malloc(b);
	if (al_mem == NULL)
	{
		exit(98);
	}
	return (al_mem);
	free(al_mem);
}
