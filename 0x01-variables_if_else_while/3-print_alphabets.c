#include <stdio.h>
/**
 * main - main function
 * Description: This is a program that printsalphabeth in lower and upper case
 * Return: allows (0) success
 */
int main(void)
{
	char smallLetter = 'a';
	
	while (smallLetter <= 'z')
	{
		putchar(smallLetter);
		smallLetter++;
	}

	char capitalLetter = 'A';

	while (capitalLetter <= 'Z')
	{
		putchar(capitalLetter);
		capitalLetter++;
	}
		putchar('\n');

	return (0);
}
