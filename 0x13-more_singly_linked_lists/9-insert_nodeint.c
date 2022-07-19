#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at index
 * @head: pointer to the first node
 * @idx: position
 * @n: value
 * Return: newnode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = NULL;
	listint_t *traversal = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while ((idx - 1) > 0)
	{
		if (traversal == NULL)
		{
			free(newnode);
			return (NULL);
		}
		traversal = traversal->next;
		idx--;
	}
	newnode->next = traversal->next;
	traversal->next = newnode;
	return (newnode);
}
