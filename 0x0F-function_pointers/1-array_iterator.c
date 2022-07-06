#include "function_pointer.h"

/**
 * array_iterator - perform a task on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: the action to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;


	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
