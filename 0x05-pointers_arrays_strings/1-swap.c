#include "main.h"
/**
 * swap_int-function to swap two integers
 * @a: the integer to be swaped
 * @b: the  integer to be swaped
 */
void swap_int(int *a, int *b)
{
int tmp = *a;

*a = *b;
*b = tmp;
}
