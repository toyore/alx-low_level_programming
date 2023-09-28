/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is calculated.
 *
 * Description: This function calculates the natural square root of a
 * non-negative integer 'n' using recursion. If 'n' does not have a
 * natural square root, the function returns -1 to indicate an error.
 *
 * Return: The natural square root of 'n' or -1 in case of an error.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)  /* Check for error: n should be non-negative */
	{
		return (-1);
	}
	else if (n == 0 || n == 1)  /* Base cases: sqrt(0) and sqrt(1) are 0 and 1, respectively */
	{
		return (n);
	}
	else
	{
		return find_sqrt(n, 1);  /* Start searching for the square root from 1 */
	}
}

/**
 * find_sqrt - Helper function to find the square root using recursion.
 * @n: The number for which the square root is calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n' or -1 in case of an error.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)  /* Check if guess^2 is equal to n */
	{
		return (guess);
	}
	else if (guess * guess > n)  /* If guess^2 exceeds n, no natural square root exists */
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, guess + 1));  /* Increment guess and continue searching */
	}
}

