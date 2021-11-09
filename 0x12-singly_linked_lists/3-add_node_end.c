#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	if (!head || !str)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
        
	last = *head;
	while (last->next)
	{
		last = last->next;
	}

	last->next = newNode;
	return (newNode);
}
