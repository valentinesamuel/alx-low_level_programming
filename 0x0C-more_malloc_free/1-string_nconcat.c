#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - joins two strings based on n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: new memory or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newmem;
	unsigned int length = n;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		length++;
	}
	newmem = malloc(sizeof(char) * (length + 1));
	if (newmem == NULL)
	{
		return (NULL);
	}
	length = 0;
	for (i = 0; s1[i]; i++)
	{
		newmem[length++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		newmem[length++] = '\0';
	}
	newmem[length] = '\0';
	return (newmem);
}
