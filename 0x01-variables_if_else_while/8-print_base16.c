#include <stdio.h>
/**
*main- Uses for loop
*Return: Return a zero
*/
int main(void)
{
char x;
for (x = '0'; x <= '9' ; x++)
putchar(x);
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
