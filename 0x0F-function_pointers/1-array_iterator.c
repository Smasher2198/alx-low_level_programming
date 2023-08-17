#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a function on each element of an array
 * @array: pointer to the array
 * @size: size of array
 * @action: pointer to a function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		exit(98);
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
