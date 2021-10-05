#include "main.h"
/**
 * print_diagonal - entry point
 *
 * @n:variable
 *
 * Return: void
 */
void print_diagonal(int n)
{
int x, y;
if (n > 1)
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}	
_putchar('\\');
_putchar('\n');
}
{
_putchar('\n');
}
}
