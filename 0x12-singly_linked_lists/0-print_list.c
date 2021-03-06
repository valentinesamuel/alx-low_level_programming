#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: the list
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	size_t numOfNodes = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		numOfNodes++;
		h = h->next;
	}
	return (numOfNodes);
}
