#include "main.h"
/**
 *more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int x, y;
for (y = 0; y <= 9; y++)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
_putchar((x / 10) + '0');
}
if (x <= 14)
{
_putchar((x % 10) + '0');
}
}
_putchar('\n');
}
return;
}
