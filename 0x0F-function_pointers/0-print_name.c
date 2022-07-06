#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function to print the name with
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);

}
