#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - function that returns a copy of string
 * @str: string to copy
 *
 * Return: NULL if str = NULL or failure,pointer to the duplicate string
 */
char *_strdup(char *str)
{
	int i;
	int n = sizeof(str);
	char *dup_str = (char *)malloc(sizeof(str) * sizeof(char));

	for (i = 0; i <= n; i++)
	{
		if (str == NULL)
		{
			return (NULL);
		}
		dup_str[i] = str[i];
	}
	return (dup_str);
}
