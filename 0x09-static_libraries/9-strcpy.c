#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string including the null byte from src to dest.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
