#include"main.h"
/**
 * print_binary - function to print binary
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if ((n & 1) == 0)
		_putchar('0');
	else
		_putchar('1');
}
