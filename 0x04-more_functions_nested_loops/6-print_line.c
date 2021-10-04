#include "main.h"
/**
 * print_line - check the code
 *@n: variable
 * Return: Always 0.
 */
void print_line(int n)
{
int y;
if (n > 0)
{
for (y = 1; y <= n; y++)
{
_putchar('_');
}
}
_putchar('\n');
return;
}
