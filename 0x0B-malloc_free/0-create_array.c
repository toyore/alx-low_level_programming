#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of characters and
 * initialize it with a specific character.
 *
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	/* check if memory allocation fails */
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

