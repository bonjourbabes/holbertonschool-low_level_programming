#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_alphabet - Uses a function to print off alphabet
*
*Return: Return value success
*/
char print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}
