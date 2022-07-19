#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - calculate the number of elements in a list_t list
 * @head: pointer to the head node
 * @n: integer of the first node
 * Return: total number of list_t elements
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *traversalnode = NULL;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	traversalnode = *head;
	if (*head != NULL)
	{
		while (traversalnode->next != NULL)
		{
			traversalnode = traversalnode->next;
		}
		traversalnode->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
