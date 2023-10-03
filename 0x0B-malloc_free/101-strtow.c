#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Splits a string into words.
 *
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	int num_words;
	int word_index;
	int word_start;
	int i;
	int j;
	char **words;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			num_words++;
		}
	}
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_start = i;
		}
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			word_length = i - word_start + 1;
			words[word_index] = (char *)malloc(word_length * sizeof(char));

			if (words[word_index] == NULL)
			{
				for (int j = 0; j < word_index; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[word_index], &str[word_start], word_length - 1);
			words[word_index][word_length - 1] = '\0';

			word_index++;
		}
	}
	words[num_words] = NULL; /* Set the last element to NULL */

	return (words);
}

