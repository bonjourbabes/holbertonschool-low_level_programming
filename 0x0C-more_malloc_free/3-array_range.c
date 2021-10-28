#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * arry_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;
	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
	return (NULL);

for (i = min; i <= max; i++, j++)
{
	ptr[j] = i;
}
return (ptr);
}
