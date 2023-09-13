#include "main.h"
/**
 * print_last_digit - This is  program that prints the last digit value
 * @n: The  program that prints the last digit value
 *
 * Description: This is a program that prints the last digit of a number
 *
 * Return: The value of the elast digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = (n % 10);
		return (-lastDigit);
	}
	else
	{
		lastDigit = (n % 10);
		return (lastDigit);
	}
}

