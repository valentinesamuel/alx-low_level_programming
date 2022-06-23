#include "main.h"

/**
 * _strspn - Find length of string that consists only of chosen bytes
 * @s: String to seach
 * @accept: The acceptable bytes that the string can contain
 *
 * Return: Length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
	}
	return (count);

}
