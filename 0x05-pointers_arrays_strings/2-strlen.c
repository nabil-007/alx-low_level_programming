#include"main.h"
/**
 * _strlen - it returns the length of a string
 * @s : the string to be mesured
 *
 * return:the value of the length
 */
int _strlen(char *s)
{
	int i = 0;
		
	while (*(s+i) != '\0')
	{
		i++;
	}
	
	return (i);
}
