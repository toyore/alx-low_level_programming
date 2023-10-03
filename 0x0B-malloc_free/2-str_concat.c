#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string to append to s1.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len_s1 = 0, len_s2 = 0;
	int total_length = 0;
	int i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	/* Calculate the total length of the concatenated string */
	total_length = len_s1 + len_s2;

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));

	/* Check if memory allocation failed */
	if (concatenated == NULL)
		return (NULL);

	/* Copy the characters from s1 to concatenated */
	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	/* Copy the characters from s2 to concatenated */
	for (j = 0; j < len_s2; j++)
		concatenated[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[total_length] = '\0';

	return (concatenated);
}
