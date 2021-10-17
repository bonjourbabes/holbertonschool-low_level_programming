#include "main.h"
#include <string.h>
/**
 *_strspn - check the code
 *@s: variable
 *@accept: variable
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
