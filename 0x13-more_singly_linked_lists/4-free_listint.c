#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: pointer to the first node
 * Return - nothing
*/
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
