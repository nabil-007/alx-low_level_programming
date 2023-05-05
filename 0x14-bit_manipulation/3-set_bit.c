#include"main.h"
/**
 * set_bit - function that sets 1 on indexed bit
 * @n: the number
 * @index: the index
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
