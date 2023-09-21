#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 *
 * Return: true if c is a separator, otherwise false
 */
bool is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}
/**
 * cap_string - Capitalizes the words in a string
 * @str: The input string
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	bool new_word = true;
	bool space_found = false; /* Track if a space is encountered */
	char *original_str = str; /* Store the original pointer */

	while (*str != '\0')
	{
		if (is_separator(*str))
		{
			new_word = true;
		}
		else if (new_word && isalpha(*str))
		{
			if (!isdigit(*(str - 1))) /* Check if not following a digit */
			{
				*str = toupper(*str);
			}
			new_word = false;
			space_found = false; /* Reset space_found when a new word starts */
		}
		else if (*str == ' ' && !space_found) /* Collapse multiple spaces to one */
		{
			space_found = true;
			new_word = true;
		}
		else
		{
			*str = tolower(*str);
		}
		str++;
	}

	return (original_str); /* Return the original pointer */
}




