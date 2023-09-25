#include "main.h"
#include <stddef.h>
/**
 * _strchr -  A function that locates a character in a string.
 * @s : a point to the sring
 * @c: the character to find in the string
 * Description: A function that locates a character in a
 * string and a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
