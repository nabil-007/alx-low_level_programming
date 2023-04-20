#include<stdio.h>
/**
 * int_index - function that search for an integer
 * @array: array of integer
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index where integer's found, -1 if not found or array not present
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (cmp != NULL && array != NULL)
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				return (i);
			}
	}
	return (-1);
}
