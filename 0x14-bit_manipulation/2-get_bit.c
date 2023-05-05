#include "main.h"
/**
 * get_bit - function that return the value of a bit
 * @n: the number
 * index: the index
 *
 * Return: the value of the bit,-1 as failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
