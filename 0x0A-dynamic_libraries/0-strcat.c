#include "main.h"
/**
 *_strcat - check the code for Holberton School students.
 *@dest: variable
 *@src: variable
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = _strlen(dest), j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
