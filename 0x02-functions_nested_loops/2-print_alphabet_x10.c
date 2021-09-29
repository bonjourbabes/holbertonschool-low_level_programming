#include "main.h"
/**
*print_alphabet_x10 - Uses the code.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int counter = 0;
while (counter <= 10)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
counter++;
}
}
