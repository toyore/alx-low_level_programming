#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 * @n: the number of times the character '_' should be printed
 */
void print_line(int n)
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
			_putchar('-');
			i++;
		}
	}
	_putchar('\n');
}
