#include "main.h"
/**
 * _root - function that find the root of a number
 * @n:the  number
 * @root: the root of the number
 *
 * Return:return square root,-1 otherwise
 */
int _root(int n, int root)
{
	if (n < root *root)
	{
		return (-1);
	}
	if (n == root * root)
	{
		return (root);
	}
	return (_root(n,root + 1));
}
/** 
 * _sqrt_recursion - function to find square of a number
 * @n : the number
 *
 * Return squre ,-1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_root(n,0));
}
