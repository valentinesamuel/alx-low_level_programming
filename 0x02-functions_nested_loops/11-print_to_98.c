#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function prototype
 * Description: Prints the number from n to 98 intergers
 * @n: The number to start from
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", m);
				break;
			}
			printf("%d, ", n);
		}
	}
}
