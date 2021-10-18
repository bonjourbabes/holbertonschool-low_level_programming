#include "main.h"
/**
 * _strchr - check the code
 *@s: variable
 *@c: variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
