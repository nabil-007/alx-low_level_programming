#include<stdio.h>
#include<stddef.h>
/**
 * array_iterator  - function gthat print the name
 * @array: array of pointer
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i <= size -1; i++)
		{
			action(*(array + i));
		}
}
