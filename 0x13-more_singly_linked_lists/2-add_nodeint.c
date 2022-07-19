#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - calculate the number of elements in a list_t list
 * @head: pointer to the head node
 * @n: integer of the first node
 * Return: total number of list_t elements
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	if (*head != NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		*head = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
