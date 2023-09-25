#include "main.h"
/**
 * _strspn - This is a function that gets the
 * length of a prefix substring.
 * @s: The pointer to the string variable
 * @accept: The pointer that is considered to have a
 * prefix substring
 * Description: A function that gets the length of
 * a prefix substring.
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *p = accept;
		int found = 0; /* Flag to check if character is in accept*/

		while (*p != '\0')
		{
			if (*s == *p)
			{
				found = 1;
				break;
			}
			p++;
		}

		if (!found)
		{
			break; /* Exit the loop if the character is not in accept*/
		}

		count++;
		s++;
	}

	return (count);
}
