#include"main.h"
/**
* _islower- to check if a character is lower or not
*@c :is the char to be checked
* Return: 1 if the char is lowercase,otherwise return 0.
*/
int _islower(int c)
{
if (c <= 122 && c >= 97)
{
	return (1);
}
else
{
	return (0);
}
}
