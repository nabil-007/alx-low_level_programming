#include"main.h"

/**
 *_memset - a function that fills memory with constant byte
 *@s:pointer to the memory area
 *@b:constant byte
 *@n:the umber of the byte to fill
 *
 * return:memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <= n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
