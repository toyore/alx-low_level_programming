#include "main.h"
/**
 * print_diagonal - A program that prints a diagonal line
 * @n: The no of times '\' is printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('\\');
			i++;
		}
		_putchar('\n');
	}
}
