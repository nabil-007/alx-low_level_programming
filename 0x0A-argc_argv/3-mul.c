#include<stdio.h>
#include<stdlib.h>
/**
 * main - function that print thr multiolication of two numbers
 * @argc: to count args
 * @argv: pointer to array of stringd
 *
 * Return: 1 as failure 0 as succes
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = mul + atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
