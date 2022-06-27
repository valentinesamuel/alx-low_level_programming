#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string into a malloc'd memory block
 * @str: pointer to the parameter string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicateString;
	int i = 0;
	int sizeOfArgString;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	sizeOfArgString = i;
	duplicateString = malloc(sizeOfArgString * sizeof(char));
	if (duplicateString == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		duplicateString[i] = str[i];
		i++;
	}
	duplicateString[i] = '\0';
	return (duplicateString);
}
