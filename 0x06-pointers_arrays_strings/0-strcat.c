#include "main.h"
/**
 * _strcat - function that  concatenates two string
 * *@c dest :pointer to destination string
 * *@c src :pointer to source string
 *
 * return :pointer to  destination
 */
char *_strcat(char *dest, char *src)
{
        int i = 0;
	int j = 0;
        int len1;
	int len2;
	int k;

        while(dest[i] != 0)
        {
                i++;
        }
        len1 = i;
        while(src[j] != 0)
        {
                j++;
        }
        len2 = j+i;
        for(k = 0 ; k < len1 ; k++)
        {
               dest[k] = dest[k]+src[k+len2];
        }
return (dest);
}
