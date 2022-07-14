#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - add a node to the end of a list
 * @head: the head node
 * @str: string
 * Return: new node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *ll = NULL;
	char *string = NULL;
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (str[len])
		len++;
	newNode->len = len;
	string = strdup(str);
	if (string == NULL)
	{
		free(newNode);
		return (NULL);
	}
	else
	{
		newNode->str = string;
	}
	ll = *head;
	if (*head != NULL)
	{
		while (ll->next != NULL)
		{
			ll = (ll)->next;
		}
		ll->next = newNode;
		newNode->next = NULL;
	}
	else
	{
		*head = newNode;
		newNode->next = NULL;
	}
	return (newNode);
}
