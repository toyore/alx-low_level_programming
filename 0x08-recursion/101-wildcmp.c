#include <stdio.h>

/**
 * wildcmp - Compare two strings allowing for wildcard character '*'.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared, which can contain '*'.
 *
 * Description:
 * This function compares two strings, 's1' and 's2', where 's2' can contain
 * the special wildcard character '*', which can match any string (including
 * an empty string). The function returns 1 if the strings are considered
 * identical based on the wildcard matching, and 0 otherwise.
 *
 * Return:
 * 1 if 's1' and 's2' are considered identical.
 * 0 if 's1' and 's2' are not identical based on the wildcard matching.
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical. */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* If s2 has a '*' character, it can match any string. */
	if (*s2 == '*')
	{
		/* Try matching s1 with and without using the '*' character. */
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	/* If the current characters match or s2 has '?', move both pointers. */
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}

