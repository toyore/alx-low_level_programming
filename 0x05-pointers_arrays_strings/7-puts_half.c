#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to print the second half of.
 *
 * Description: This function calculates the starting index for the second half
 * of the input string based on its length. If the length is even, it starts
 * from the middle; if it's odd, it starts from (length - 1) / 2. Then, it
 * iterates through and prints the second half of the string.
 */
void puts_half(char *str)
{
	int length;
	int start_index;
	int i;

	if (str == NULL)
	{
		return;
	}
	length = strlen(str);

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

