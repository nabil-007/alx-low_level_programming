#include "main.h"
/**
 * factorial - function that print the factorial of any given number
 * @n:the enter number
 *
 *Return: 0 if n is lower than 0, -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
