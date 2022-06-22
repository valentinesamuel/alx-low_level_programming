#include "main.h"

/**
 * _pow_recursion - recursively find x to the power of base y
 * @x: base
 * @y: power
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (0);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
