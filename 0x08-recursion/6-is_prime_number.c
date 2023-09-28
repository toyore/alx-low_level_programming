#include <stdio.h>

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to be checked for primality.
 *
 * Description:
 * This function checks whether the input integer 'n' is a prime number.
 * A prime number is a positive integer greater than 1 that has no divisors
 * other than 1 and itself.
 *
 * Return:
 * 1 if 'n' is a prime number.
 * 0 if 'n' is not a prime number.
 */
int is_prime_number(int n);

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}

	if (n <= 3)
	{
		return (1); /* 2 and 3 are prime numbers */
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0); /* Numbers divisible by 2 or 3 are not prime */
	}

	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0); /* Numbers divisible by i or i+2 are not prime */
		}
	}

	return (1); /* If no divisors found, it's a prime number */
}


