#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add a node at the end of a list_t list
 * @head: pointer to the head node
 * @n: integer of the node
 * Return: address of the new node
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
