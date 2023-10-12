#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
