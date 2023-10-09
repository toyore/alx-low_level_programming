#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_valid_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of num1 and num2.
 */
int multiply(char *num1, char *num2)
{
	int result = 0;

	while (*num1)
	{
		int digit1 = *num1 - '0';
		int temp = 0;
		char *tmp_num2 = num2;

		while (*tmp_num2)
		{
			int digit2 = *tmp_num2 - '0';

			temp = (temp * 10) + (digit1 * digit2);
			tmp_num2++;
		}

		result = (result * 10) + temp;
		num1++;
	}
	return (result);
}
