#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - function that allocs memory
 *@b: variable of alloc size
 *Return: zero
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
