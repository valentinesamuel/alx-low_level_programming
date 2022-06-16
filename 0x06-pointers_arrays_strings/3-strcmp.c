#include "main.h"

/**
 * _strcmp - Function which compare two strings and
 *@s1: first string
 *@s2:second string
 *Return:
 *zero if s1 == s2
 *negative number if s1 < s2
 *positive number if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	int result;
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
