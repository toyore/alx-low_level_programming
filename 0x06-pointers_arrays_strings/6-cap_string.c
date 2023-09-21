#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * is_separator - Check if a character is a separator.
 * @c: The character to check.
 *
 * Return: True if @c is a separator, false otherwise.
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
 * cap_string - Capitalize all words in a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	bool new_word = true;

	while (*str != '\0')
	{
		if (is_separator(*str))
		{
			new_word = true;
		}
		else if (new_word && isalpha(*str))
		{
			*str = toupper(*str);
			new_word = false;
		}
		else
		{
			*str = tolower(*str);
		}
		str++;
	}
	return (str);
}

