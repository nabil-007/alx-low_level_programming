#include "main.h"
/**
 * flip_bits - function that return the number bits need to flip
 * @n: the number 1
 * @m: the number 2
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int diff;

	diff = n ^ m;
	for (; diff != 0; diff >>= 1)
	{
		if (diff & 1)
		{
			diff_bits++;
		}
	}
	return (diff_bits);
}
