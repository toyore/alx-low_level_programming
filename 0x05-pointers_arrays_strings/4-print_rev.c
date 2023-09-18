#include "main.h"
/**
 * print_rev -  A function that prints a string, in reverse
 * , followed by a new line.
 * @s : the pointer to the string
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
