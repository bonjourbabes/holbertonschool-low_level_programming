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
	int i;
	int len = strlen(str);
	
	char *arr = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		arr[i] = str[i];
		i++;
	}
	while (i < len)
	{
		printf("%d", *(arr + i));
	}
	arr[i] = '\0';

	free(arr);
	return(arr);
	

	

}
