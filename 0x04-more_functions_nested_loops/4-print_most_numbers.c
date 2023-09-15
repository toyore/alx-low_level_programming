#include "main.h"
/**
 * print_most_numbers - This is a function that prints the numbers
 * from 0 to 9 followe by a new line
 * Description: This program prints numers from 0 to 9
 * 2and 4 are excluded
 */
void print_most_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
		digit++;
	}
	_putchar('\n');
}
