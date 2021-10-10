#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
  int i;
  for (i = 0; str[i] != '\0'; i++)
    {
      if (i == 0)
	{
	  if ((str[i] >= 'a' && str[i] <= 'z'))
	    str[i] = str[i] - 32;
	  continue;
	}
  if(str[i]==' ')
  {

   ++i;
   if(str[i]>='a' && str[i]<='z')
   {
    str[i]=str[i]-32; 
    continue; 
   }
  }
      
    }
  return (str);
}
