#include "lists.h"

/**
 * pop_listint - free a listint_t list
 * @head: pointer to the first node
 * Return: value of the head nod
*/

int pop_listint(listint_t **head)
{
	listint_t *traversal;
	int nvalue;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		traversal = (*head)->next;
		nvalue = (*head)->n;
		free(*head);
		*head = traversal;
	}
	return (nvalue);
}
