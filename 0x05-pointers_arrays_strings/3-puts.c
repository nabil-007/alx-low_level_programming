#include "main.h"
#include<stdio.h>
/**
 * _puts - to print strings
 * @s : the string to be printed
 */
void _puts(char *str)
{
	int i=0;

	while(*(str + i) != '\0')
	{
		printf("%c",str[i]);
		i++;
	
	}
	printf("\n");
}
