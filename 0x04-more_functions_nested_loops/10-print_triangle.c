#include "main.h"
/**
 * print_triangle - A function that prints a triangle,
 * followed by a new line.
 * @size: is the number of times triangle will be printed
 * If size is 0 or less, the function should print only a new line
 */
void print_triangle(int size)
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

			while (j <= i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}

}
