#include "main.h"
/**
 * _strncpy - Copies at most n characters from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: The maximum number of characters to copy.
 * Return: A pointer to the destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* Store the original destination pointer*/
	char *original_dest = dest;
	int i;

	/* Copy at most 'n' characters from 'src' to 'dest'*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Null-terminate the destination string*/
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	/* Return a pointer to the beginning of 'dest'*/
	return (original_dest);
}
