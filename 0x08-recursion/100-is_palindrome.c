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
	int len = strlen(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0); /* Not a palindrome */
		}
	}

	return (1); /* It's a palindrome */
}

