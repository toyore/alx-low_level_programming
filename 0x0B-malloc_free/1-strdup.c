#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 *
 * @str: The string to duplicate.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing a copy of the input string, or NULL
 *         if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t len;

	/* Check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculate the length of the input string */
	len = strlen(str);

	/* Allocate memory for the duplicated string */
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	/* Check if memory allocation failed */
	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* Copy the input string to the newly allocated memory */
	strcpy(duplicate, str);

	return (duplicate);
}
