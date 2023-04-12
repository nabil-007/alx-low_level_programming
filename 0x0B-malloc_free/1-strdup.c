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
	char *dup_str;
	int i;
	int j = 0;
	int n;

	while (str[j] != '\0')
	{
		j++;
	}
	n = j;
	dup_str = malloc((n + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= n + 1; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
	free(dup_str);
}
