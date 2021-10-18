#include "main.h"
/**
 *_strncat - check the code for Holberton School students.
 *@dest: variable
 *@src: variable
 *@n: variable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = _strlen(dest), j = 0;
while (src[j] != '\0' && n--)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
