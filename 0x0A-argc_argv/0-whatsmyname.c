#include<stdio.h>
#include<stdlib.h>
/**
 *main - function that prints its name followed by new line
 *@argc: to compte
 *@argv: pointer to array of arguments
 *Return:0 as succes
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i <= argc - 1; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

