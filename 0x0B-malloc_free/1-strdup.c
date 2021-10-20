#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - check the code
 *@str: variable
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	arr = malloc((len + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
