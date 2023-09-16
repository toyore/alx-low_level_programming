#include "main.h"
/**
 * more_numbers - A function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Description: A program that prints 0 to 14 in 10 places
 */
void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int digit = 0;

		while (digit <= 14)
		{
			if (digit > 9)
			{
				_putchar(digit / 10 + '0');
			}
			_putchar(digit % 10 + '0');
			digit++;
		}
		_putchar('\n');
		i++;
	}
}

