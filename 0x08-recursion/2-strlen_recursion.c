#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string for which length is calculated.
 *
 * Description: This function recursively counts and returns the length
 * of the input string 's'.
 *
 * Return: The length of the string 's'.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
