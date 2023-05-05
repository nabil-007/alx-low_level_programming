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
	unsigned int c = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		c = c << 1;
		if ((b[i] & 1) != 0)
			c += 1;
		i++;
	}
	return (c);
}
