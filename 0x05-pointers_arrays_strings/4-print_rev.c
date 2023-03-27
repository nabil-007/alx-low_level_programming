#include"main.h"
#include<stdio.h>
/**
 * print_rev - print a string in reverse
 * @s: string to reverse
 */
void print_rev(char *s)
{	
	int i;
	int j;

	while(s[i] != '\n')
	{
		i++;
	}
	for(j=i ; j < s[0] ;j--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
