#include <stdio.h>
/**
*main - Uses for loop lowercase in reverse
*Return: Return a zero
*/
int main(void)
{
int c;
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
