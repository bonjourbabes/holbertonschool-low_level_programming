#include "main.h"
/**
 *print_rev - check the code
 *@s: variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
s--;
while (*s != '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
