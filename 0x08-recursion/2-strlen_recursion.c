#include "main.h"

/**
 * _strlen_recursion - Recursively calculates the length of a string
 * @s:the string whose length is to be checked
 * Return: the length of the sttring
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	char *trunatedStr;

	if (*s != '\0')
	{
		trunc = s + 1;
		len = 1 + _strlen_recursion(truncatedStr);
		return (len);
	}
	else
	{
		return (0);
	}
}
