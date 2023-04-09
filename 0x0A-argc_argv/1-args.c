#include<stdio.h>
#include"main.h"
/**
 * main - function that prints the passed number of agruments
 * @argv: the number of arguments
 *@argc: pointer to an array
 *
 * Return: 1 on succes
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	if (argc > 0)
		printf("%i\n", argc - 1);
	return (1);
}
