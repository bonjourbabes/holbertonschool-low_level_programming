#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - check the code
 *@h: variable
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	const list_t *new = h;
	int nodeCount = 0;

	if (h == NULL)
	{
		return (nodeCount);
	}

	while (new)
	{
		if (new->str)
			printf("[%u] %s\n", new->len, new->str);
		else
			printf("[0] (nil)\n");
		new = new->next;
		nodeCount++;
	}
	return (nodeCount);
}
