#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - check the code
 *@s: variable
 *@accept: variable
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
				s++;
}
	return (0);
}
