#include "main.h"

/**
 * print_last_digit - Function prototype
 * @num: The number to check
 * Description: Prints the last digit of a number
 * Return: The last digit of the number
 */
int print_last_digit(int num)
{
	num = num % 10;

	if (num < 0)
	{
		num = -num;
	}
	_putchar(num + '0');
	return (num);
}
