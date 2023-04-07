#include"main.h"
/**
 * is_prime-function to check whether a number is prime
 * @n: the number to ckeck
 * @div: the divisor
 *
 * Return: 0 if the number is pair ,0 otherwise
 */
int is_prime(int n,int div)
{
	if (n == div)
	{
		return (1);
	}
	if (n % div == 0)
		return (0);
	return (is_prime(n,div + 1));
}
/**
 * is_prime_number - function to verify whether it's a prime number or not
 * @n: the number to check
 * Return:1 if the bumber is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 3;

	if (n == 2)
	{
		return (1);
	}
	if (n < 2 || n % 2 == 0 )
		return (0);
	return (is_prime(n,div));
}
