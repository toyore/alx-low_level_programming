#include <stdio.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit = 0;

	while (*s == ' ')
	{
		s++;
	}


	if (*s == '-')
	{
		sign = -1;
		s++;
	} else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (2147483647 - digit) / 10)
		{
			return ((sign == 1) ? 2147483647 : -2147483648);
		}
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
