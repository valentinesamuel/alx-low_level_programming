#include "main.h"

/**
 * _abs - Function prototype
 * Description: Computes the absolute value of a number
 * @num: The number to find the absolute value of
 * Return: Absolute value of the number
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		num = num * -1;
		return (num);
	}
}
