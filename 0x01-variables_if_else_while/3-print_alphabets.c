#include <stdio.h>
/**
*main - uses for loop to print off a string
*Return: Return value
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
