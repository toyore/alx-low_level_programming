#include "main.h"
/**
 * _strncpy - Copies at most n characters from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: The maximum number of characters to copy.
 * Return: A pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	char dest_length = 0;
	char src_length = 0;
	char count_bytes = 0;

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
	/*reset back pointers to their original position*/
	dest -= dest_length;
	src -= src_length;

	/*Copy characters from src to dest, up to a maximum of n bytes*/
	while (*src != '\0' && count_bytes < n)
	{
		*dest = *src;
		dest++;
		src++;
		count_bytes++;
	}
	*dest = '\0';
	/*Return a pointer to the concatenated string*/
	return (dest);
}
