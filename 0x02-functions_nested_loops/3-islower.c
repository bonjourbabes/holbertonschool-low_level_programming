#include "main.h"
/**
*_islower - function that lowers
*@c: the variable
*Return: return zero success
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar('1');
}
else if (c >= 'A' && c <= 'Z')
{
_putchar('1');
}
else
{
_putchar('0');
}
return (0);
}
