#include"main.h"
/**
*  _isalpha check for alphabetic character.
*  @c is the char to be checked
*  return 1 if is a letter ,0 otherwise
*/
int _isalpha(int c)
{
	if (c <= 122 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
