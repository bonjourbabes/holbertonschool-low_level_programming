#include "main.h"
/**
 *_puts - check the code
 *@str: variable
 * Return: Always 0.
 */
void _puts(char *str)
{
int counter = 0;
while (*str != '\0')
{
_putchar(*str);
counter++;
str++;
}
_putchar('\n');
}
