#include<stdio.h>
#include<stdlib.h>
/**
 * is_digits - function that check there is a character in digits
 * @s: string to check
 *
 * Return: 0 as succes, otherwise 1
 */
int is_digits(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		{
			if(s[i] >= '0' && s[i] <= '9')
			{
				return(0);
				i++;
			}
		}
	return (1);
}
	
/**
 * main-programe to add positive numbers
 * @argc:to count args
 * @argv: pointer to array of strings
 *
 * Return:0 as succes 1 in case the entre isn't digit
 */
int main(int argc , char *argv[])
{
	int sum = 0;
	int i = 0;
	if(argc ==1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if(is_digits(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
				printf("%i\n", sum);
			}
		else
			{
			printf("Error\n");
			return (1);
			}
	}
	return (0);
}
