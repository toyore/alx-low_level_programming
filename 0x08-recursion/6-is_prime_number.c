#include <math.h>

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if @n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	/* Special cases: 0 and 1 are not prime numbers */
	if (n <= 1)
	{
		return (0);
	}

	/* Check if n is divisible by any integer from 2 to sqrt(n) */
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0); /* n is divisible by i, so it's not prime */
		}
	}

	return (1); /* n is a prime number */
}

