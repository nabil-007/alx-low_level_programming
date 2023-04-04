#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int k;

	k = n;
	for (i = 0 ; i <= k ; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
