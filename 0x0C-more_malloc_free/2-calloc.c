#include <stdlib.h>
#include "main.h"
/**
 *_calloc - function that allocs memory for array
 *@nmemb: elements
 *@size: variable of bytes
 *Return: zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
