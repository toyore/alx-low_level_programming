/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Description: This function calculates the value of 'x' raised to the power
 * of 'y' using recursion. If 'y' is negative, the function returns -1 to
 * indicate an error.
 *
 * Return: The result of 'x' raised to the power of 'y'
 * or -1 in case of an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)  /* Check for error: y should be non-negative */
	{
		return (-1);
	}
	else if (y == 0)  /* Base case: x^0 is 1 */
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));  /* Calculate power recursively */
	}
}

