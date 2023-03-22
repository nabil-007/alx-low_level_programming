#include"main.h"
/**
 *  _isalpha check for alphabetic character.
 *  @c is the char to be checked
 *  return 1 if is letter ,otherwise return 0.
 */
int _isalpha(int c)
{
	if(c <= 122 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
