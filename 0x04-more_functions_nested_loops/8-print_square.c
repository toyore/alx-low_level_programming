#include "main.h"
/**
 * print_square - A function that prints a square,
 * followed by a new line
 * @size: the number of times square is printed
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= size)
		{
			int j = 1;

			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
