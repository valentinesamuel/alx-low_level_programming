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
		printf("[%d] %s\n", h->len, h->str);
		numOfNodes++;
		h = h->next;
	}
	return (numOfNodes);
}
