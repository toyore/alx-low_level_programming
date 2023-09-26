#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A pointer to a pointer to char (double pointer).
 * @to: A pointer to the char that will be assigned.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
