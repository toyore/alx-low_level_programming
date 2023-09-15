#include "main.h"
/**
 * more_numbers - A function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Description: A program that prints 0 to 14 in 10 places
 */
void more_numbers(void)
{
	int i = 0;
	int digit = 0;

	while (i <= 10)
	{
		while (digit <= 14)
		{
			_putchar(digit);
		}
		digit++;
	}
	i++;
	_putchar('\n');
}

