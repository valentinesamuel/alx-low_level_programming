#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: string to use.
 */

void puts_half(char *str)
{
	int length = 0;
	int index;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
	{
		index = (length + 1) / 2;
		while (str[index] != '\0')
		{
			_putchar(str[index]);
			index++;
		}
	}
	else
	{
		index = length / 2;
		while (str[index] != '\0')
		{
			_putchar(str[index]);
			index++;
		}
	}
	_putchar('\n');
}
