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
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (old_size < new_size)
	{
		new_size = old_size;
	}
	for (unsigned int i = 0; i < new_size; i++)
	{
		*((char *)new_ptr + 1) = *((char *)ptr + 1);
	}
	free(ptr);
	return (new_ptr);
}
