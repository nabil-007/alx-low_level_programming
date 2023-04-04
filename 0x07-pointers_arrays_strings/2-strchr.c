#include"main.h"
#define NULL 0
/**
 * _strchr - function that locates character in a string
 * @s: the pointer to the first character
 * @c: the string to check
 *
 * return : the string ,otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0' && s[i] != 'c')
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
