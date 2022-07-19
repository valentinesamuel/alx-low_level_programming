#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum all nodes
 * @head: pointer to the first node
 * Return: value of the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
