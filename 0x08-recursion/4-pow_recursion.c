#include"main.h"
/**
 * _pow_recursion - function return the value of x raised to the powerof y
 * @x: the value to be powered
 * @y: the power *
 *
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
