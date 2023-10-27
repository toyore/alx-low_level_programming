/**
 * flip_bits - Counts the number of bits to flip to get from n to m
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 *
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

