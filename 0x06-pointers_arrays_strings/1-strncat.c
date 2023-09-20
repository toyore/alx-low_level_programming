#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest:  A pointer to type char
 * @src: A pointer to type char
 * @n: it will use at most n bytes from src
 * Description: A function that concatenates two strings
 * it will use at most n bytes from src, src does not need
 * to be null-terminated if it contains n or more bytes
 * Return:  pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	int dest_length = 0;
	int src_length = 0;
	int copied_bytes = 0;

	while (*dest != '\0')
	{
		dest++;
		dest_length++;
	}

	/* Calculate the length of the source string, up to a maximum of n bytes*/
	while (src_length < n && *src != '\0')
	{
		src++;
		src_length++;
	}
	src = src - src_length;

	/* Copy characters from src to dest, up to a maximum of n bytes*/
	while (copied_bytes < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		copied_bytes++;
	}

	/* Add the end-of-string marker to the end of the concatenated string*/
	*dest = '\0';

	return (original_dest);
}

