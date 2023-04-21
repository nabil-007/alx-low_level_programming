#include<stdarg.h>
#include<stdlib.h>
/**
 * sum_them_all - function that returns the sum of its parameter
 * @n: the paramete
 *
 * Return: 0,if n=0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	unsigned int sum;
	int m = n;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < m; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
