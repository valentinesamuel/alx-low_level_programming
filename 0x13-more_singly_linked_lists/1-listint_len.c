#include "lists.h"
#include <stdio.h>

/**
 * listint_len - calculate the number of elements in a list_t list
 * @h: the head node
 * Return: total number of list_t elements
 **/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
