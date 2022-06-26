#include <stdio.h>

/**
 * main - function that prints the number of arguments passed to it
 * @argc: number of arguments passed
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
