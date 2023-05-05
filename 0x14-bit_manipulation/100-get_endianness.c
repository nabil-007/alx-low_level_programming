#include "main.h"
/**
 * get_endianness - function
 * Return: 1 if little, 0 otherwise
 */
int get_endianness(void)
{
	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
