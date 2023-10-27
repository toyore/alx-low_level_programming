#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int shift = sizeof(n) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (i = 0; i <= shift; i++)
	{
		int bit = (n >> (shift - i)) & 1;

		if (bit)
			flag = 1;
		if (flag)
			putchar(bit ? '1' : '0');
	}
}

