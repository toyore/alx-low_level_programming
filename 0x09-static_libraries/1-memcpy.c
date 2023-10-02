#include "main.h"
/**
 * _memcpy - This function copies a memory area
 * @dest : The memory that copies from another memory
 * @src: From where the value is copied from
 * @n: The number of bytes to fill
 * Description: This is a function that copies from "src"
 * a maximum byte of n to the memory area pointed to by "dest"
 *
 * Return:  dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (original_dest);
}
