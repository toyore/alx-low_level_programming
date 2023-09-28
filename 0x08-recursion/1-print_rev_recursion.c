#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function recursively prints each character
 * of the input string 's' in reverse order.
 */
void _print_rev_recursion(char *s)
{
	/* Base Case */
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
