#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get node at an index
 * @head: pointer to the first node
 * @index: position
 * Return: value of the head nod
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
