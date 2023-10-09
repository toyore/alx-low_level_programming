#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate (up to the first n bytes).
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *     i    If memory allocation fails or if n is less than 0, return NULL.
 *         If NULL is passed as s1 or s2, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int s2_len = (s2 != NULL) ? strlen(s2) : 0;
	unsigned int concat_len = (n >= s2_len) ? s2_len : n;


	result = malloc(s1_len + concat_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	else
	{
		result[0] = '\0';
	}

	strncat(result, s2, concat_len);

	return (result);
}
