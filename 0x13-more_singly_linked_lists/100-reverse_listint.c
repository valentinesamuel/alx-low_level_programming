#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse a list_t list
 * @head: pointer to the head node
 * Return: address of the new node
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *actual;

	if (*head == NULL)
		return (NULL);
	actual = *head;
	while (actual->next != NULL)
	{
		temp = actual->next;
		actual->next = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
