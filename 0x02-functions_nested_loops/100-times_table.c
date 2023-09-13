#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which to print the times table.
 *
 * Description: This function prints the times table for the given number n.
 * If n is greater than 15 or less than 0, nothing is printed.
 * Format: Each entry is formatted to three spaces. Columns are separated by
 * one space. Rows are separated by a new line.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
			{
				if (result < 10)
					_putchar(result + '0');
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			else
			{
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				else
					_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

