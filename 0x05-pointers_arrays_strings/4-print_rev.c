#include "main.h"
#include <string.h>
/**
 * print_rev -  A function that prints a string, in reverse
 * , followed by a new line.
 * @s : the pointer to the string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	if (s == NULL)
	{
		return;
	}
	while (s[length] != '\0')
	{
		length++;
	}

	i = length - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
