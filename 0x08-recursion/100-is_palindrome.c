
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



int is_palindrome(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		if (s[start] != s[end])
		{
			return (0);
			/* Characters at the start and end don't match */
		}
		start++;
		end--;
	}

	return (1);  /* It's a palindrome*/
}
