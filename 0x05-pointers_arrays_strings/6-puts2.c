#include "main.h"
/**
 *puts2 - check the code
 *@str: variable
 * Return: Always 0.
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
if (*str == '\0')
{
break;
}
else
{
str++;
}
}
_putchar('\n');
return;
}
