#include "main.h"

/**
 * _isalpha - Function prototype
 * Description: Checks if a character is a letter
 * @c: The ascii character to be checked
 * Return: 1 if it is a letter otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
