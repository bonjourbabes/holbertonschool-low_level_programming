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
	int nodeCount = 0;

	if (h == NULL)
	{
		return (nodeCount);
	}

	while(h)
	{
		if(h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
