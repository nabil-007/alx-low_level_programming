#include "main.h"
/**
 * positive_or_negative - check if the number is positif or nit
 *
 * @i integer to be checked
 *
 * return : always 0.
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positif\n",i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n",i);
	}
	else
	{
		printf("%d is negatif\n",i);
	}
}
