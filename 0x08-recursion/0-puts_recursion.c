#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Description: This function recursively prints each character
 * of the input string 's' followed by a newline character ('\n').
 */
void _puts_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
