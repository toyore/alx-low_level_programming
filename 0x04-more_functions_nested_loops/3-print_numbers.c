#include "main.h"
/**
 * print numbers - Prints numbers from 0 to 9 followed by a new line
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
