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
	int i;
	int k;

	k = n;
	for (i = 0 ; i <= k ; i++)
	{
		s[i] = b;
	}
	return (s);
}
