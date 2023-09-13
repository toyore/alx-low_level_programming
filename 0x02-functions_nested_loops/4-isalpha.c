#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet letter.
 * @c: The character to be checked.
 *
 * Description:
 * This function checks if the character 'c' is an alphabet letter,
 * either lowercase or uppercase.
 *
 * Return:
 * 1 if 'c' is a letter, lowercase or uppercase, and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
