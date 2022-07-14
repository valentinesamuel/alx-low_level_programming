#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: the list
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	unsigned int numOfNodes = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nill)\n");
		numOfNodes++;
		h = h->next;
	}
	return (numOfNodes);
}
