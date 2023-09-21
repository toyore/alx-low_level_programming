#include "main.h"
/**
 * rot13 - Encode a string using the ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *original_str = str;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str != '\0')
	{
		int i = 0;
		int found = 0;

		while (alphabet[i] != '\0')
		{
			if (*str == alphabet[i])
			{
				*str = rot13[i];
				found = 1;
				break;
			}
			i++;
		}

		if (!found)
		{
			str++;
			continue;
		}

		str++;
	}

	return (original_str);
}

