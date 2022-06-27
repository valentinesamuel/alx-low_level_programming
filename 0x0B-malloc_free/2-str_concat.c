#include "main.h"
#include <stdlib.h>

/**
 * str_concat - add two strings into a memory block
 * @s1: string one
 * @s2: string two
 * Return: a pointer to the memory block
 */
char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	int lenOfStrs = 0;
	int i = 0;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	lenOfStrs = i;
	j = 0;
	while (s2[j] != '\0')
		j++;
	lenOfStrs += j;
	i = 0;
	j = 0;
	concatStr = malloc(lenOfStrs + sizeof(char));
	if (concatStr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		concatStr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concatStr[i] = s2[j];
		i++;
		j++;
	}
	concatStr[i] = '\0';
	return (concatStr);
}
