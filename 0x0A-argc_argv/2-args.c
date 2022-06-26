#include <stdio.h>

/**
 * main - print all the arugments it receives
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
