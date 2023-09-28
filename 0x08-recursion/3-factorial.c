#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which the factorial is calculated.
 *
 * Description: This function calculates the factorial of a non-negative
 * integer 'n'. The factorial of 0 is 1, and if 'n' is negative, the
 * function returns -1 to indicate an error.
 *
 * Return: The factorial of 'n' or -1 in case of an error.
 */
int factorial(int n)
{
	/* check for invalid input(negative no) */
	if (n <  0)
	{
		return (-1);
	}
	/* Base case: factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}
	/* Recursive case: calculate factorial for n using recursion */
	return (n * factorial(n - 1));
}
