#include "main.h"
/**
 * _abs - prints the absolute vaue of an integer
 * @n: The integer for which to compute the absolute value.
 *
 * Description: This is a program that computes the absolute
 * value of an integer.
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}


