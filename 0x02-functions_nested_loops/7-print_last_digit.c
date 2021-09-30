#include "main.h"
/**
*print_last_digit - prints off the last digit
*@a: variable input
*Return: return
*/
int print_last_digit(int a)
{
a = a % 10;
if (a < 0)
{
a = -a;
_putchar('0' + a);
}
else
{
_putchar('0' + a);
}
return (a);
}
