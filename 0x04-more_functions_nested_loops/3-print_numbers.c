#include "main.h"
/**
 * print_numbers - Prints the digits from 0 to 9 followed by a new line.
 *
 * Description:
 * This function prints the digits from 0 to 9 on a single line,
 * followed by a new line character to create a newline.
 */
void print_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
}
