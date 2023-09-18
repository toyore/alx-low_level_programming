#include "main.h"
#include <stddef.h>
/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str : the pointer to the first chsr of the string
 */
void puts2(char *str)
{
	int i  = 0;

	if (str == NULL)
	{
		return;
	}

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
