#include <stdio.h>
/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: A pointer to the unsigned long integer to modify
 * @index: The index of the bit to set (0-based)
 *
 * Return: 1 if it worked, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	mask = 1UL;
	mask <<= index;
	*n |= mask;

	return (1);
}
