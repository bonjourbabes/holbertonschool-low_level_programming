#include "holberton.h"
#include <stdio.h>
/**
 *_strncpy - check the code for Holberton School students.
 *@dest: variable
 *@src: variable
 *@n: variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
  for (n = 0; *src; n++)
    {
      *dest = *src;
      src++;
      dest++;
     
    }
  *dest = '\0';
  return (dest);
}
