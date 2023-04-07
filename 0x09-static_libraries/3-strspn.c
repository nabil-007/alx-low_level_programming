#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int sum = 0;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				sum++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (sum);
		}
		i++;
	}
	return (sum);
}
