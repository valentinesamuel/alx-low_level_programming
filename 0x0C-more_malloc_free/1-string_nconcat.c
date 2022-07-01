#include "main.h"
#include <stdlib.h>

/**
 * len - checks the length of the given input
 * @list: the list
 * Return: length
 */
int len(char *list)
{
	int iterator = 0;
	while (list[iterator] != '\0')
	{
		iterator++;
	}
	return (iterator);
}

/**
 * string_nconcat - joins two strings based on n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: new memory or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenofs1 = 0;
	unsigned int lenofs2 = 0;
	unsigned int i = 0;
	unsigned int j=0;
	char *newmem;

	if(s1 == NULL)
	{
		s1 = "";
	}
	if(s2 == NULL)
	{
		s2 = "";
	}
	lenofs1 = len(s1);
	lenofs2 = len(s2);
	if (n >= lenofs2)
	{
		newmem = malloc_checked((lenofs1 + lenofs2) * sizeof(char));
		while(i < lenofs1)
		{
			newmem[i] = s1[i];
			i++;
		}
		while(j < lenofs2)
		{
			newmem[i] = s2[j];
			i++;
			j++;
		}
		newmem[i] = '\0';

	}
	else
	{
		newmem = malloc_checked((lenofs1 + n) * sizeof(char));
		while (i < lenofs1)
		{
			newmem[i] = s1[i];
			i++;
		}
		while(j < n)
		{
			newmem[i] = s2[j];
			i++;
			j++;
		}
		newmem[i] = '\0';
	}
	return (newmem);
}
