#include "holberton.h"
/**
 *cap_String - check the code for Holberton School students.
 *@str: variable
 * Return: Always 0.
 */
char *cap_string(char *str)
{
  int i ; 
    for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == 0)
	{
	  if ((str[i] >= 'a' && str[i] <= 'z'))
	    str[i] = str[i] - 32;
	}
