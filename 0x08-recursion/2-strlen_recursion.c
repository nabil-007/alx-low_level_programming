#include "main.h"
/**
 * _strlen_recursion - function that return the length
 * @s : to the string to be mesured
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
