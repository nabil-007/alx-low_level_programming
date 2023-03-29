#include "main.h"
/**
 * _strcat - function that  concatenates two string
 * @dest :pointer to destination string
 * @src :pointer to source string
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
        len2 = len1 + i;
        for(k = len1 ; k < len2 ; k++)
        {
               dest[k] = src[len1++];
        }
	dest[len2] = '\0';
return (dest);
}
