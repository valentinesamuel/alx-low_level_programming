#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be reversed
 *
 * Return: Nothing
 *
 * the firstchar: holds the truncated string(character that was removed).
 * if the string has no characters, return
 * else, truncate the string by deleting the first character
 * plug the truncated string into the function again
 * print the string. It won't print untill all the recursive call
 * has been executed off the stack. So from the last recurse on the
 * stack, the string gets printed(untruncating).
 */
void _print_rev_recursion(char *s)
{
	char *firstChar;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		firstChar = s + 1;
		_print_rev_recursion(firstChar);
		_putchar(*s);
	}
}
