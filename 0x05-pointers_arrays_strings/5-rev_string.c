#include "main.h"
#include "2-strlen.c"
/**
 *rev_string - check the code
 *@s: variable
 * Return: Always 0.
 */
void rev_string(char *s)
{
int len, i;
char *begin, *end, temp;
begin = s;
end = s;
len = _strlen(s);
for (i = 0; i < len - 1; i++)
{
end++;
}
for (i = 0; i < len / 2; i++)
{
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
}
