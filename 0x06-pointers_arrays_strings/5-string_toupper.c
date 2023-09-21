#include "main.h"
/**
 * string_toupper - Convert lowercase letters in a string to uppercase.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *original_str = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}

	return (original_str);
}

