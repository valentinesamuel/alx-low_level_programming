#include "main.h"

/**
 * _strchr - Find given char in string
 * @s: string to search
 * @c: char to search for
 *
 * Return: Pointer to first instance of c
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
