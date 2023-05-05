#include "main.h"
/**
 * clear_bit - function that sets the value to 0
 * @index: the index
 * @n :the number
 *
 * Return: 1 as succes,-1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
		return (1);
}
