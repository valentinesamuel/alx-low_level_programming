#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - delete head node
 * @head: pointer to the first node
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *actual  = NULL;
	listint_t *traversal = NULL;

	if (*head == NULL)
		return;
	actual = *head;
	while (actual != NULL)
	{
		traversal = actual->next;
		actual->next = NULL;
		free(actual);
		actual = traversal;
	}
	*head = NULL;
}
