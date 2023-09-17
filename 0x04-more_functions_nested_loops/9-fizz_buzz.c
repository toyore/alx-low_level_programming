#include <stdio.h>
/**
 * main - Entry point for the FizzBuzz program.
 *
 * Description:
 * This program prints numbers from 1 to 100 based on the FizzBuzz rules:
 * - For multiples of both 3 and 5, it prints "FizzBuzz."
 * - For multiples of 3, it prints "Fizz."
 * - For multiples of 5, it prints "Buzz."
 * - For all other numbers, it prints the number itself.
 * Numbers and words are separated by spaces, and a newline character is added
 * at the end for proper formatting.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");

	return (0);
}
