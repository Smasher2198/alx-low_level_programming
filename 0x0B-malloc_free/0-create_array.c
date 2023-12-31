#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of char
 * @size: the size of array to be created
 * @c: the char to initialze the array
 *
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
