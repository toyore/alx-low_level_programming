#include "main.h"
/**
 * print_number - Prints an integer as a sequence of characters.
 *
 * @n: The integer to be printed.
 *
 * Description:
 * This function takes an integer 'n' and prints
 * it as a sequence of characters.
 * It handles both positive and negative integers and uses recursion to print
 * each digit individually without using long, arrays, pointers, or hard-coded
 * special values. The printed output may include a '-' sign for negative
 * numbers.
 *
 * Return: No return value (void)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	print_number(n % 10);
}
