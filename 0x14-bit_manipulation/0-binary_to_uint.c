#include"main.h"
#include<stdlib.h>
/**
 * binary_to_uint - function to convert binary to uint
 * @b: pointer to a string
 *
 * Return: thr converted number,0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c;

	if (b == NULL)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	{
		if (*b == '0' || *b == '1')
		{
			c <<= 1;
			if (*b == '1')
				c += 1;
		}
		else
			return (0);
	}
	return (c);
}

