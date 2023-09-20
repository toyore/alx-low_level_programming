#include "main.h"
/**
 * _strcat - A function that concatenates two strings
 * and then adds a terminating null byte
 * @dest : A pointer that points to char data type
 * @src : A pointer that points to char data type
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
