#include "main.h"
/**
 * _memset -  This is a function that points to data type char
 * @s :  The pointer to the memory address of a variable
 * @b : The constant byte character that is been filled in
 * memory
 * @n : The extent at which b is filled in s
 * Description This funtion fills the first n bytes of the
 * memory area  pointed by s with the constant byte b
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i = 0;

	while (i < n)
	{
		*ptr = b;
		ptr++;
		i++;
	}
	return (s);
}
