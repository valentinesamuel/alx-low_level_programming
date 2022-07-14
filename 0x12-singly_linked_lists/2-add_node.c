#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - add a node at the beginning of a list
 * @head: the head of the list
 * @str: string
 * Return: the newly added node
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;
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
	if (*head != NULL)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		*head = newNode;
		newNode->next = NULL;
	}
	return (newNode);
}
