#include "main.h"
/**
 * _strlen -  This is a program that returns the length of a string.
 * @s : pointer declaration
 * Description: This is a program that returns the length of a string.
 * Return: Lengeth of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
