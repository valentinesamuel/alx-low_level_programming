#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: a pointer to the string to be printed
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	char *currentChar;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		currentChar = s + 1;
		_puts_recursion(currentChar);
	}
}
