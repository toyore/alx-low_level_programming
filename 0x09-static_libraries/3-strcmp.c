/**
 * _strcmp - Compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: Negative value if s1 is less than s2,
 *         Positive value if s1 is greater than s2,
 *         0 if s1 is equal to s2.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
}

