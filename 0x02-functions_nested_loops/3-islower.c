#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description:
 * This function checks if a given character is lowercase by comparing it to
 * the ASCII values of lowercase letters ('a' to 'z').
 *
 * @c: The character to be checked.
 *
 * Return:
 * 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

