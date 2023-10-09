#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 *         If new_size == old_size, return ptr.
 *         If new_size is equal to zero, and ptr is not NULL,
 *         free(ptr) and return NULL.
 *         If malloc fails or if ptr is NULL, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}
	if (new_size > old_size)
	{
		new_size = old_size; /* Only copy up to the minimum of old and new sizes */
	}
	memcpy(new_ptr, ptr, new_size);
	free(ptr);
	return (new_ptr);
}

