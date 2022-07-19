#include "lists.h"
#include <stdio.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	

	if(*head == NULL || head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (index != 1)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	
}
