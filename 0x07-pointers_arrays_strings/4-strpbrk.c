#include "main.h"

/**
 * _strpbrk - Find first occurence of any accepted byte
 * @s: String to search
 * @accept: Byte accepted
 *
 * Return: Return pointer to first occurence of byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
