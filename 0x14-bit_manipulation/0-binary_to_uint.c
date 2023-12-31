#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: Pointer to a binary string
 *
 * Return: The converted unsigned integer, or 0 if there are invalid characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}

		i++;
	}

	return (result);
}


