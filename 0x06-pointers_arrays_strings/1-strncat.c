#include"main.h"
/**
 * _strncat - concatenates two strings.
 * @s : string to concatenate
 * @s : string to concatenate
 * @i : bytes to use
 *
 * return - dest
 */
char *_strncat(char *dest, char *src, int n)
{

        int i = 0;
	int m;
        int len1;

        while(dest[i] != 0)
        {
                i++;
        }
	len1 = i - 1;
	for(m = 0 ; m <  n ; m++)
	{
		dest[len1++] =  src[m];
        }
		dest[len1] = '\0';
return (dest);
}
