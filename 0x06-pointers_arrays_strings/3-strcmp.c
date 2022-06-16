#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first input char
 * @s2: second input char
 *
 * Description: the function compares two strings
 * Return: character count
 */
int _strcmp(char *s1, char *s2)
{
	int iterator;

	while (s1[iterator] != '\0' && s2[iterator] != '\0')
	{
		if (s1[iterator] != s2[iterator])
		{
			return (s1[iterator] - s2[iterator]);
		}
		iterator++;
	}
	return (0);
}
