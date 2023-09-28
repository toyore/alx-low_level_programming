
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to be checked for palindromicity.
 *
 * Description:
 * This function checks whether the input string 's' is a palindrome.
 * A palindrome is a string that reads the same forwards and backwards.
 * An empty string is considered a palindrome as well.
 *
 * Return:
 * 1 if 's' is a palindrome.
 * 0 if 's' is not a palindrome.
 */


int is_palindrome(char *s);



int is_palindrome(char *s)
{
	int length = strlen(s);

	/* Base case: an empty string or a single character is a palindrome */
	if (length <= 1)
	{
		return (1);
	}

	/* Compare the first and last characters */
	if (s[0] != s[length - 1])
	{
		return (0);
	}

	/* Recursively check the substring excluding the first and last characters */
	return is_palindrome(s + 1);
}
