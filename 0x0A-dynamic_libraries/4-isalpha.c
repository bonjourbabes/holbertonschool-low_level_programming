#include "main.h"
/**
*_isalpha - function uses code
*@c: the variable
*Return: Return zero
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
}
return (0);
}
