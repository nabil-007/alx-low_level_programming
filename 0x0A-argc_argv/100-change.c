#include<stdio.h>
#include<stdlib.h>
/**
 * main- function to print coins changes
 * @argc: to count length of string
 * @argv: pointer to string of array
 *
 * Return: 0 as succes,1 otherwise
 */
int main(int argc, char *argv[])
{
	int n;
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	n = atoi(argv[1]);
	sum += n / 25;
	n = n % 25;
	sum += n / 10;
	n = n % 10;
	sum += n / 5;
	n = n % 5;
	sum += n / 2;
	n = n % 2;
	sum +=  n / 1;
	printf("%d\n", sum);
	return (0);
}
