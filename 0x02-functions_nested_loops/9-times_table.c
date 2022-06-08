#include "main.h"

/**
 * times_table - Function prototype
 * Description: Prints the times table from 0 to 9
 * Return: void
 */
void times_table(void)
{
	int internalIdx;
	int externalIdx;
	int product;

	for (externalIdx = 0; externalIdx <= 0; externalIdx++)
	{
		for (internalIdx = 0; internalIdx <= 9; internalIdx++)
		{
			product = externalIdx + internalIdx;
			if (internalIdx != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (internalIdx != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product % 10) + '0');
		}
			_putchar('\n');
	}
}
