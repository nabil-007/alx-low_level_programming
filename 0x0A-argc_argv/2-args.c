#include<stdio.h>
#include<stdlib.h>
/**
 * main-function that print all the arguments
 * @argc: to count arguments
 * @argv: pointer to a string
 *
 * Return: 0 as succes
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
	for (i = 0; i <= argc - 1 ; i++)
	{
		printf("%s\n", argv[i]);
	}
	}
	return (0);
}
