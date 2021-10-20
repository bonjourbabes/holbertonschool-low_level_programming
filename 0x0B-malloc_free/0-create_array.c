#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars and initlaize
 * @size: the address of memory to print
 * @c: the size of the memory to print
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (arr[0]);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	while (i < size)
	{
		printf("%d", *(arr + i));
	}
	arr[i] = '\0';
	return (arr);
}
