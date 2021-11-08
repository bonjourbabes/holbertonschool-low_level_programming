#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 *@h: variable
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	const list_t *new = h;
	int nodeCount = 0;

	if (h == NULL)
	{
		return (nodeCount);
	}

	while (new)
	{
		new = new->next;
		nodeCount++;
	}
	return (nodeCount);
}
