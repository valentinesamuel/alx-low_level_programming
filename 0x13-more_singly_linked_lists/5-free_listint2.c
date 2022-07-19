#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - delete head node
 * @head: pointer to the first node
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
