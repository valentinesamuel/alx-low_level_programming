#include "main.h"

/**
 * _strstr - Find first occurence of given string in another string
 * @haystack: String to search through
 * @needle: String to seatch for
 *
 * Return: Pointer to beginning of located string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}~
