#include"main.h"
/**
 * print_times_table:prints the n times table starting from 0
 * @n:integer argument the number of times
 */
void print_times_table(int n)
{
int i,j,k;
int n ;
while( n<=10 && n>0 )
{
	for (i=0 ; i <= n ; i++)
{
	_putch('0');
		for( j = 0 ; j <= n ;j++)
		{
		_putchar (',');
		_putchar ('  ');
		k=i*j;
		_putchar (k);


		}
		_putchar('\n');
}
