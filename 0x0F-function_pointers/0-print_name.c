#include<stdio.h>
/**
 * print_name - function to print the niame
 * @name: name to be print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
