#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: pointer to a memory previously allocated
 * @old_size: size, in bytes of allocated space for a pointer
 * @new_size: new size, in bytes, of a new memory block
 *
 * Return: the pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (old_size < new_size)
	{
		unsigned int i = 0;

		while (i < old_size)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
			i++;
		}
	}
	else
	{
		unsigned int i = 0;

		while (i < new_size)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
			i++;
		}
	}
	free(ptr);
	return (new_ptr);
}
