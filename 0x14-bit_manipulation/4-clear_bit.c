#include <stdio.h>
/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index
 * @n: A pointer to the unsigned long integer to modify
 * @index: The index of the bit to clear (0-based)
 *
 * Return: 1 if it worked, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;
	return (1);
}

