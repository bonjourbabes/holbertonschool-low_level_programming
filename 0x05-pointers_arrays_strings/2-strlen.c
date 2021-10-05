#include "main.h"
/**
 *_strlen - check the code
 *@s: variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
