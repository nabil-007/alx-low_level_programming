#include<stdio.h>
#include<stdlib.h>
/**
 * *create_array - function that create an array of chars
 * @c: the char to create
 * @size: the size of the array
 *
 * Return: NULL is the size id 0,NULL as failure
 */
char *create_array(unsigned int size, char c)
{
	int i;
	int n = size;
	char *char_array = (char *)malloc(size * sizeof(char));

	for (i = 0; i <= n; i++)
	{
		if (n == 0)
		{
			return (NULL);
		}
		else
		{
			char_array[i] = c;
		}
	}
	return (char_array);
	free(char_array);
}
