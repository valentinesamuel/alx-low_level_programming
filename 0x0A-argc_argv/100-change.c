#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the function
 * @argc: counts the arguments of the function
 * @argv: gives the value of the program passed to the function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if ((cents % 25) < cents)
			{
				cents -= 25;
				conts++;
			}
			else if ((cents % 10) < cents)
			{
				cents -= 10;
				coins++;
			}
			else if ((cents % 5) < cents)
			{
				cents -= 5;
				coins++;
			}
			else if (cents % 2 < cents)
			{
				cents -= 2;
				coins++;
			}
			else if (cents % 1 < cents)
			{
				cents -= 1;
				coins++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
